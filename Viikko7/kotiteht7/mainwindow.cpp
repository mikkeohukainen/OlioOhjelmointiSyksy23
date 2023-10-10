#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer;

    setGameInfotxt("Select playtime and press start", 14);

    connect(ui->btn120s, &QPushButton::clicked, this, &MainWindow::handleTimeSelect);
    connect(ui->btn5min, &QPushButton::clicked, this, &MainWindow::handleTimeSelect);
    connect(ui->btnStart, &QPushButton::clicked, this, &MainWindow::handleStart);
    connect(ui->btnStop, &QPushButton::clicked, this, &MainWindow::handleStop);
    connect(ui->btnSwitch1, &QPushButton::clicked, this, &MainWindow::handleSwitch);
    connect(ui->btnSwitch2, &QPushButton::clicked, this, &MainWindow::handleSwitch);


    connect(pQTimer, &QTimer::timeout, this, &MainWindow::timeout);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
}

void MainWindow::timeout()
{
    qDebug() << "timeout";

    if (gameOnGoing)
    {
        if (currentPlayer == 1)
        {
            player1Time -= 1;
        }
        else
        {
            player2Time -= 1;
        }

        updateProgressBar();

        if (player1Time == 0)
        {
            setGameInfotxt("Player 2 won!", 14);
            gameOnGoing = false;
        }
        else if (player2Time == 0)
        {
            setGameInfotxt("Player 1 won!", 14);
            gameOnGoing = false;
        }
    }
}

void MainWindow::handleStart()
{
    if (player1Time != 0 && player2Time != 0)
    {
        setGameInfotxt("Game ongoing", 14);
        gameOnGoing = true;
        pQTimer->start(1000);
        currentPlayer = 1;
    }
    else
        setGameInfotxt("Select playtime", 14);
}

void MainWindow::handleStop()
{
    //setGameInfotxt("New game via start button", 14);

    setGameInfotxt("Select playtime and press start", 14);
    pQTimer->stop();
    ui->progressBar1->setValue(0);
    ui->progressBar2->setValue(0);
    player1Time = 0;
    player2Time = 0;
    gameOnGoing = false;

}

void MainWindow::handleTimeSelect()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if (name == "btn120s")
    {
        gameTime = 120;
        player1Time = 120;
        player2Time = 120;
    }
    else if (name == "btn5min")
    {
        gameTime = 300;
        player1Time = 300;
        player2Time = 300;
    }

    updateProgressBar();
    setGameInfotxt("Ready to play", 14);
}

void MainWindow::handleSwitch()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if (name == "btnSwitch1")
    {
        currentPlayer = 2;
    }

    else if (name == "btnSwitch2")
    {
        currentPlayer = 1;
    }
}

void MainWindow::updateProgressBar()
{
    ui->progressBar1->setValue(int(float(player1Time)/float(gameTime)*100));
    ui->progressBar2->setValue(int(float(player2Time)/float(gameTime)*100));
}

void MainWindow::setGameInfotxt(QString text, short x)
{
    ui->label->setText(text);
    QFont currentFont = ui->label->font();
    currentFont.setPointSize(x);
    ui->label->setFont(currentFont);
}


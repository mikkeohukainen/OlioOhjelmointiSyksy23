#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , player(1), gameOver(false)
{
    ui->setupUi(this);

    connect(ui->btnStart, &QPushButton::clicked, this, &MainWindow::handleStart);
    connect(ui->btnQuit, &QPushButton::clicked, this, &MainWindow::handleQuit);
    connect(ui->btn0_0, &QPushButton::clicked, this, &MainWindow::handleXO);
    connect(ui->btn0_1, &QPushButton::clicked, this, &MainWindow::handleXO);
    connect(ui->btn0_2, &QPushButton::clicked, this, &MainWindow::handleXO);
    connect(ui->btn1_0, &QPushButton::clicked, this, &MainWindow::handleXO);
    connect(ui->btn1_1, &QPushButton::clicked, this, &MainWindow::handleXO);
    connect(ui->btn1_2, &QPushButton::clicked, this, &MainWindow::handleXO);
    connect(ui->btn2_0, &QPushButton::clicked, this, &MainWindow::handleXO);
    connect(ui->btn2_1, &QPushButton::clicked, this, &MainWindow::handleXO);
    connect(ui->btn2_2, &QPushButton::clicked, this, &MainWindow::handleXO);

    ui->txtBox->setText("Valitse start pelataksesi");
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::clearGrid()
{
    QGridLayout *grid = qobject_cast<QGridLayout*>(ui->gridLayout->layout());
    if(grid)
    {
        for (int row = 0; row < grid->rowCount(); ++row)
        {
            for (int col = 0; col < grid->columnCount(); ++col)
            {
                QPushButton *button = qobject_cast<QPushButton*>(grid->itemAtPosition(row, col)->widget());
                if(button)
                {
                    button->setText("");
                }
            }
        }
    }
}

void MainWindow::checkForWinner()
{
    for (int i = 0; i < 3; i++)
    {
        if (grid[i][0] != EMPTY && grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2])
        {
            whichPlayerWon();
        }

        if (grid[0][i] != EMPTY && grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i])
        {
            whichPlayerWon();
        }
    }

    if ((grid[0][0] != EMPTY && grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) ||
        (grid[0][2] != EMPTY && grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]))
    {
        whichPlayerWon();
    }

    if (gameOver == false)
    {
        checkForDraw();
    }
}

void MainWindow::whichPlayerWon()
{
    gameOver = true;

    switch (player)
    {
    case 1:
        ui->txtBox->setText("Pelaaja O voitti! Start = uusi peli, Quit = lopeta");
        break;
    case 2:
        ui->txtBox->setText("Pelaaja X voitti! Start = uusi peli, Quit = lopeta");
        break;
    }
}

void MainWindow::checkForDraw()
{
    bool isDraw = true;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] == EMPTY)
            {
                isDraw = false;
            }
        }
    }

    if (isDraw)
    {
        gameOver = true;
        ui->txtBox->setText("Tasapeli! Start = uusi peli, Quit = lopeta");
    }
}

void MainWindow::handleStart()
{
    clearGrid();
    ui->txtBox->setText("Pelaaja X vuorossa");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            grid[i][j] = EMPTY;
        }
    }

    player = 1;
    gameOver = false;

}

void MainWindow::handleQuit()
{
    this->close();
}

void MainWindow::handleXO()
{
    if (gameOver) return;

    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;

    int row = name.at(3).digitValue();
    int col = name.at(5).digitValue();

    if (player == 1 && button->text() == "")
    {
        button->setText("X");
        player = 2;
        ui->txtBox->setText("Pelaaja O vuorossa");

        grid[row][col] = X;
    }

    else if (player == 2 && button->text() == "")
    {
        button->setText("O");
        player = 1;
        ui->txtBox->setText("Pelaaja X vuorossa");

        grid[row][col] = O;
    }

    checkForWinner();
}







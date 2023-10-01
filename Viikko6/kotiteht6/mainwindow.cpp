#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , number1(""), number2(""), state(1)

{
    ui->setupUi(this);

    connect(ui->btnN0, SIGNAL(clicked()), this, SLOT(btnN0Handler()));
    connect(ui->btnN1, SIGNAL(clicked()), this, SLOT(btnN1Handler()));
    connect(ui->btnN2, SIGNAL(clicked()), this, SLOT(btnN2Handler()));
    connect(ui->btnN3, SIGNAL(clicked()), this, SLOT(btnN3Handler()));
    connect(ui->btnN4, SIGNAL(clicked()), this, SLOT(btnN4Handler()));
    connect(ui->btnN5, SIGNAL(clicked()), this, SLOT(btnN5Handler()));
    connect(ui->btnN6, SIGNAL(clicked()), this, SLOT(btnN6Handler()));
    connect(ui->btnN7, SIGNAL(clicked()), this, SLOT(btnN7Handler()));
    connect(ui->btnN8, SIGNAL(clicked()), this, SLOT(btnN8Handler()));
    connect(ui->btnN9, SIGNAL(clicked()), this, SLOT(btnN9Handler()));
    connect(ui->btnAdd, SIGNAL(clicked()), this, SLOT(btnAddHandler()));
    connect(ui->btnSub, SIGNAL(clicked()), this, SLOT(btnSubHandler()));
    connect(ui->btnMul, SIGNAL(clicked()), this, SLOT(btnMulHandler()));
    connect(ui->btnDiv, SIGNAL(clicked()), this, SLOT(btnDivHandler()));
    connect(ui->btnEnter, SIGNAL(clicked()), this, SLOT(btnEnterHandler()));
    connect(ui->btnClear, SIGNAL(clicked()), this, SLOT(btnClearHandler()));

}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if(state==1)
    {
        number1 = number1 + name.right(1);
        ui->txtNum1->setText(number1);
    }
    else
    {
        number2 = number2 + name.right(1);
        ui->txtNum2->setText(number2);
    }

    qDebug() << "Button name: " << name;
    qDebug() << "Number 1 = " << number1;
    qDebug() << "Number 2 = " << number2;
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;

    if(name == "btnAdd")
    {
        ui->txtOperand->setText("+");
        operand = 0;
    }
    else if(name == "btnSub")
    {
        ui->txtOperand->setText("-");
        operand = 1;
    }
    else if(name == "btnMul")
    {
        ui->txtOperand->setText("*");
        operand = 2;
    }
    else if (name == "btnDiv")
    {
        ui->txtOperand->setText("/");
        operand = 3;
    }

    state = 2;
}

void MainWindow::clearAndEnterClickhandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;

    if(name == "btnEnter")
    {
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();
        qDebug() << "number 1 = " << n1 << " and number 2 = " << n2 << Qt::endl;

        switch(operand)
        {
        case 0:
            result = n1 + n2;
            break;
        case 1:
            result = n1 - n2;
            break;
        case 2:
            result = n1 * n2;
            break;
        case 3:
            result = n1 / n2;
            break;
        }

        ui->txtResult->setText(QString::number(result));
    }
    else if(name == "btnClear")
    {
        state = 1;
        resetLineEdits();
    }
}

void MainWindow::resetLineEdits()
{
    number1 = "";
    number2 = "";
    ui->txtNum1->setText(number1);
    ui->txtNum2->setText(number2);
    ui->txtOperand->setText("");
    ui->txtResult->setText("");
}

void MainWindow::btnAddHandler()
{
    addSubMulDivClickHandler();
}

void MainWindow::btnSubHandler()
{
    addSubMulDivClickHandler();
}

void MainWindow::btnMulHandler()
{
    addSubMulDivClickHandler();
}

void MainWindow::btnDivHandler()
{
    addSubMulDivClickHandler();
}

void MainWindow::btnEnterHandler()
{
    clearAndEnterClickhandler();
}

void MainWindow::btnClearHandler()
{
    clearAndEnterClickhandler();
}

void MainWindow::btnN0Handler()
{
    numberClickedHandler();
}

void MainWindow::btnN1Handler()
{
    numberClickedHandler();
}

void MainWindow::btnN2Handler()
{
    numberClickedHandler();
}

void MainWindow::btnN3Handler()
{
    numberClickedHandler();
}

void MainWindow::btnN4Handler()
{
    numberClickedHandler();
}

void MainWindow::btnN5Handler()
{
    numberClickedHandler();
}

void MainWindow::btnN6Handler()
{
    numberClickedHandler();
}

void MainWindow::btnN7Handler()
{
    numberClickedHandler();
}

void MainWindow::btnN8Handler()
{
    numberClickedHandler();
}

void MainWindow::btnN9Handler()
{
    numberClickedHandler();
}



#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //void timeout();

public slots:
    void handleStart();
    void handleStop();
    void handleTimeSelect();
    void handleSwitch();
    void timeout();

private:
    Ui::MainWindow *ui;

    bool gameOnGoing = false;

    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;

    QTimer * pQTimer;

    void updateProgressBar();
    void setGameInfotxt(QString, short);
};
#endif // MAINWINDOW_H

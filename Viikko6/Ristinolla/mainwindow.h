#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

private:
    Ui::MainWindow *ui;

    int grid[3][3];

    const int EMPTY = 0;
    const int X = 1;
    const int O = 2;

    int player;
    bool gameOver;

    void clearGrid();
    void checkForWinner();
    void whichPlayerWon();
    void checkForDraw();

private slots:
    void handleStart();
    void handleQuit();
    void handleXO();
};
#endif // MAINWINDOW_H

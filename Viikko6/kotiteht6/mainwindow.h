#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

/*Tehtävänannosta poiketen QPushButton olioiden erilliset handlerit
 * ovat kommentoitu pois ja handlereita on vain kolme
 * (katso alla)
*/

private slots:
    void numberClickedHandler();
    void clearAndEnterClickhandler();
    void addSubMulDivClickHandler();

//    void btnN0Handler();
//    void btnN1Handler();
//    void btnN2Handler();
//    void btnN3Handler();
//    void btnN4Handler();
//    void btnN5Handler();
//    void btnN6Handler();
//    void btnN7Handler();
//    void btnN8Handler();
//    void btnN9Handler();

//    void btnAddHandler();
//    void btnSubHandler();
//    void btnMulHandler();
//    void btnDivHandler();
//    void btnClearHandler();
//    void btnEnterHandler();


private:
    Ui::MainWindow *ui;

    QString number1, number2;
    int state;
    float result;
    short operand;

    void resetLineEdits();

//    void numberClickedHandler();
//    void clearAndEnterClickhandler();
//    void addSubMulDivClickHandler();
};
#endif // MAINWINDOW_H


#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

/*! \brief Main class of Pongsit's application for project CS340.
 *
 *  This comment is for CS340 Homework1
 *  I added 2 buttons on_pushButton_2_clicked() and on_pushButton_3_clicked()
 *
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

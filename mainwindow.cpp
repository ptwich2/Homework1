//! Mainwindow codes go here

#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton " << std::endl;
}

void MainWindow::on_pushButton_2_clicked()
{
    std::cout << "Add by Pongsit 1 was clicked!" << std::endl;
}

void MainWindow::on_pushButton_3_clicked()
{
    std::cout << "Add by Pongsit 2 was clicked!" << std::endl;
}

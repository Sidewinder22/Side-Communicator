#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionExit_triggered()
{
    std::cout << "Exit Action" << std::endl;
    QApplication::quit();
}


void MainWindow::on_pushButton_clicked()
{
    std::cout << "Exit Button" << std::endl;
    QApplication::quit();
}


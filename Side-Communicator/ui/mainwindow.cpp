#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , log_("MainWindow")
{
    ui->setupUi(this);

    log_ << FUNC << logger::END;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionExit_triggered()
{
    log_ << FUNC << logger::END;
    QApplication::quit();
}


void MainWindow::on_pushButton_clicked()
{
    log_ << FUNC << logger::END;
    QApplication::quit();
}


void MainWindow::on_action_Quit_triggered()
{
    log_ << FUNC << logger::END;
    QApplication::quit();
}


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "log/logger.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void aboutNotif();
    void quitNotif();

private slots:
    void on_actionExit_triggered();
    void on_pushButton_clicked();
    void on_action_Quit_triggered();

    void on_action_About_triggered();

private:
    Ui::MainWindow *ui;
    logger::Logger log_;
};
#endif // MAINWINDOW_H

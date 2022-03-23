#ifndef USERACTIONHANDLER_H
#define USERACTIONHANDLER_H

#include <QWidget>
#include "log/logger.h"

class UserActionHandler : public QWidget
{
    Q_OBJECT
public:
    explicit UserActionHandler(QWidget *parent = nullptr);

public slots:
    void showAbout();
    void quit();

signals:

private:
    logger::Logger log_;
    QWidget* parent_;

    constexpr static auto ABOUT = "     About     \n";
    constexpr static auto APP = "SideCryptoCommunicator\n";
    constexpr static auto BY = "                  by\n";
    constexpr static auto AUTHOR = "      {\\_Sidewinder22_/}";
};

#endif // USERACTIONHANDLER_H

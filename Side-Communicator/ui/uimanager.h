#ifndef UIMANAGER_H
#define UIMANAGER_H

#include <QObject>
#include "ui/mainwindow.h"
#include "ui/useractionhandler.h"
#include "log/logger.h"

class UIManager : public QObject
{
    Q_OBJECT
public:
    explicit UIManager(QObject *parent = nullptr);

signals:

private:
    MainWindow* mainWindow_;
    UserActionHandler* userActionHandler_;
    logger::Logger log_;
};

#endif // UIMANAGER_H

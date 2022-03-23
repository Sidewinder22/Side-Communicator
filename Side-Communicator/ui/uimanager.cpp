#include "uimanager.h"

UIManager::UIManager(QObject *parent)
    : QObject{parent}
    , mainWindow_(new MainWindow)
    , userActionHandler_(new UserActionHandler(mainWindow_))
    , log_("UIManager")
{
    log_ << FUNC << logger::END;

    connect(mainWindow_,
        &MainWindow::aboutNotif,
        userActionHandler_,
        &UserActionHandler::showAbout);

    connect(mainWindow_,
        &MainWindow::quitNotif,
        userActionHandler_,
        &UserActionHandler::quit);
}

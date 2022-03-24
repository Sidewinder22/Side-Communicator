#include "application.h"

Application::Application()
    : mainWindow_(new MainWindow)
    , log_("Application")
{
    log_ << FUNC << logger::END;

    std::cout << "log***" << std::endl;

    mainWindow_->show();
}

#include "application.h"

Application::Application()
    : ui_(new UIManager)
    , log_("Application")
{
    log_ << FUNC << logger::END;
}

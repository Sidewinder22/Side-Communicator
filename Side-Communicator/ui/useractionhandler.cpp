#include <QApplication>
#include <QMessageBox>
#include "useractionhandler.h"

UserActionHandler::UserActionHandler(QWidget *parent)
    : QWidget{parent}
    , log_("UserActionHandler")
    , parent_(parent)
{  }

void UserActionHandler::showAbout()
{
    QString description;
    description.append( APP );
    description.append( BY );
    description.append( AUTHOR );

    QMessageBox::about( parent_, ABOUT, description );
}

void UserActionHandler::quit()
{
    log_ << "Bye..." << logger::END;

    QApplication::quit();
}

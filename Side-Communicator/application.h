#ifndef APPLICATION_H
#define APPLICATION_H

#include <QObject>
#include "ui/uimanager.h"
#include "log/logger.h"

class Application : public QObject
{
    Q_OBJECT
public:
    explicit Application();

signals:

private:
    UIManager* ui_;
    logger::Logger log_;
};

#endif // APPLICATION_H

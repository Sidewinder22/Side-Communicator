#include <cstring>
#include "logger.h"

namespace logger
{

Logger::Logger( std::string prefix )
    : prefix_( prefix )
    , beginLine_( true )
{ }

template<>
Logger& operator<<( Logger& log, std::string str )
{
    log.writeIndex();

    std::cout << str;

    if ( str == "\n" )
    {
        log.beginLine_ = true;
    }

    return log;
}

template<>
Logger& operator<<( Logger& log, QString info )
{
    log.writeIndex();

    std::string str = info.toStdString();
    std::cout << str;

    if ( str == "\n" )
    {
        log.beginLine_ = true;
    }

    return log;
}

template<>
Logger& operator<<( Logger& log, const char* str )
{
    log.writeIndex();

    std::cout << str;

    int result = std::strcmp( str, "\n" );
    if ( result == 0 )
    {
        log.beginLine_ = true;
    }

    return log;
}

void Logger::writeIndex()
{
    if ( beginLine_ )
    {
        std::cout << "[" << prefix_ << "] ";
        beginLine_ = false;
    }
}

} // ::logger

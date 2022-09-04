#include "log.hpp"

using namespace challenge::helpers;

Log::Log()
{
    // TODO:
}

Log& Log::getInstance()
{
    static Log log;
    return log;
}

void Log::message(int level, std::string fmt, ...)
{
    // TODO
}
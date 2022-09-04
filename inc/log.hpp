#pragma once

#include <string>
#include <syslog.h>

namespace challenge {
namespace helpers {

#define LOGD(fmt, args...) Log::message(LOG_DEBUG, "[D][%s:%d] " fmt, __func__, __LINE__, ## args)
#define LOGE(fmt, args...) Log::message(LOG_ERR, "[E][%s:%d] " fmt, __func__, __LINE__, ## args)

class Log
{
public:
    Log();
    ~Log() = default;
    Log(const Log&) = delete;
    Log &operator=(const Log&) = delete;
    Log(const Log&&) = delete;

    static Log& getInstance();
    static void message(int level, std::string fmt, ...);

private:
    /* data */
};
    
} // namespace log
} // namespace challenge
#pragma once

#include <string>
#include "Singleton.h"
#include <iostream>

#define MAKE_LOG(typestr, msg) \
    {\
        Log::GetInstance()->write(typestr,msg);\
    }

#define FATAL(msg)   MAKE_LOG("Emergency", msg)
#define ERROR(msg)   MAKE_LOG("Error", msg)
#define WARNING(msg) MAKE_LOG("Warning", msg)
#define NOTICE(msg)  MAKE_LOG("Notice", msg)
#define INFO(msg)    MAKE_LOG("Info", msg)
#define DEBUG(msg)   MAKE_LOG("Debug", msg)
class Log : public Singleton<Log> {
public:
 /* Write to terminal.
 */
    void write(std::string typestr, std::string str)
    {
        std::cout <<"[" << typestr << "] " << str << std::endl;
    }
};
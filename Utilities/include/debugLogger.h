#ifndef DEBUGLOGGER_H
#define DEBUGLOGGER_H

#ifdef debug
#endif

#include <QString>
#define LOG_FUNCTION_CALL() DebugLogger::logFunctionCall(__FUNCTION__)
namespace Debug 
{


enum class Type
{
    Warning,
    Info,
    Error,
    Debug
};

class Logger
{
public:
    static void log(const Type& type, const QString& errorMessage);
    static void logFunctionCall(const QString& functionName);
    
};

}

#endif // !DEBUGLOGGER_H

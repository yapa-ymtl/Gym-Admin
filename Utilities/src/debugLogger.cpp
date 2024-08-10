#include "debugLogger.h"
#include <QtDebug>

namespace Debug {

void Logger::log(const Type& type_, const QString& errorMessage_)
{
#ifdef DEBUG
    
    switch (type_) 
    {
        case Type::Info:
            {
                qInfo() << "INFO: "<< errorMessage_;
                return;
            }
        case Type::Warning:
            {
                qWarning() << "WARNING: " << errorMessage_;
                return;
            }
        case Type::Error:
            {
                qCritical() << "ERROR: " << errorMessage_;
                return;
            }
        case Type::Debug:
            {
                qDebug() << "DEBUG: " << errorMessage_;
                return;
            }
    }
#endif // DEBUG
}

void Logger::logFunctionCall(const QString& functionName)
{
    qDebug() << "Debug: Func. call " << functionName;  
}
}

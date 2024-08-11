#include "person.h"
#include "debugLogger.h"




// ====================================
//         Public Member functions
// ====================================

Person::Person() 
{
    _name   = "";
    _age    = 0;
    _height = 0;
    _weight = 0;
}

int Person::getAge() const
{
    return _age;
}

qreal Person::getHeight() const
{
    return _height;
}

qreal Person::getWeight() const
{
    return _weight;
}

qreal Person::getBMI() const
{
    return _weight / (_height * _height);
}

bool Person::setName(const QString& name_)
{
    if (name_.isEmpty())
    {
        Debug::Logger::log(Debug::Type::Debug , "name can not be empty.");
        return false;
    }
    _name = name_;
    return true;
}

bool Person::setAge(const int& age_)
{
    if (age_ < 0 && age_ > 100)
    {
        Debug::Logger::log(Debug::Type::Debug , "age is not valid");
        return false;
    }
    _age = age_;
    return true;
}

bool Person::setHeight(const qreal& height_)
{
    if (height_ < 0 && height_ > 3)
    {
        Debug::Logger::log(Debug::Type::Debug , "height is not valid");
        return false;
    }
    _age = height_;
    return true;
}

bool Person::setWeight(const qreal& weight_)
{
    if (weight_ < 0 && weight_ > 500)
    {
        Debug::Logger::log(Debug::Type::Debug , "Weight is not valid");
        return false;
    }
    _age = weight_;
    return true;
}

/* ====================================
         Public Member functions
 ==================================== */


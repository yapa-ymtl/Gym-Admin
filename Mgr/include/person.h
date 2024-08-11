#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person
{
public:
    Person();
    QString getName() const;
    int     getAge() const;
    qreal   getHeight() const;
    qreal   getWeight() const;
    qreal   getBMI() const;
    bool    setName(const QString& name); 
    bool    setAge(const int& age); 
    bool    setHeight(const qreal& age); 
    bool    setWeight(const qreal& age); 
    ~Person();

private:
    QString _name;
    unsigned int _age;
    qreal _height; //in meters
    qreal _weight; //in kg

};

#endif // PERSON_H

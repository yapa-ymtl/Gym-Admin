#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person
{
public:
    Person();
    QString     getName() const;
    int         getAge() const;
    qreal       getHeight() const;
    qreal       getWeight() const;
    qreal       getBMI() const;
    ~Person();

private:
    QString _name;
    unsigned int _age;
    qreal _height;
    qreal _weight;
    qreal _BMI;

    void _calculateBMI();
};

#endif // PERSON_H

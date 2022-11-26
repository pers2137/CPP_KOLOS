#include "Developer.h"

Developer::Developer()
{
    //ctor
}

Developer::~Developer()
{
    //dtor
}

Developer::Developer(string surname1, int age1,int experience1, double salary1)
:Employee(surname1,age1,experience1,salary1){};

double Developer::calculateBonus(int value)
{

    return value + 0.2*value*(getSalary()+getExperience());
}

void Developer::show()
{
    cout << "Developer - ";
    Employee::show();

}

int Developer::calculateSalary(int value)
{

    return (int)calculateBonus(value);
}

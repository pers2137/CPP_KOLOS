#include "TeamLeader.h"

TeamLeader::TeamLeader()
{
    //ctor
}

TeamLeader::TeamLeader(string surname1, int age1,int experience1, double salary1)
:Employee(surname1,age1,experience1,salary1){};

TeamLeader::~TeamLeader()
{
    //dtor
}


void TeamLeader::show()
{
    cout << "Jestem Team Leader z  "<< getExperience() << " letnim doœwiadczeniem " << endl;
    Employee::show();

}

double TeamLeader::calculateBonus(int value)
{

    return value*(1+ getSalary() + getExperience());
}

int TeamLeader::calculateSalary(int value)
{

    return (int)calculateBonus(value);
}

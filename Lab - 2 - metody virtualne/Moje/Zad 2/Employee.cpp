#include "Employee.h"

Employee::Employee()
{
    //ctor
}

Employee::~Employee()
{
    //dtor
}

Employee::Employee(string surname1, int age1,int experience1, double salary1)
:surname(surname1),age(age1),experience(experience1),salary(salary1) {}

void Employee::show()
{
    cout << "[ surname: " << surname << " | age: " << age << " | experience: " << experience << " | salary: " << salary << " ]" << endl;
}

int Employee::ageEmployment(){return age;}
string Employee::getSurname(){return surname;}
int Employee::getAge(){return age;}
int Employee::getExperience(){return experience;}
double Employee::getSalary(){return salary;}

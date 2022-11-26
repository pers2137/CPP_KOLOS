#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "Employee.h"

class Developer: public Employee
{
    public:
        Developer();
        Developer(string surname1, int age1,int experience1, double salary1);
        virtual ~Developer();
        double calculateBonus(int value);
        virtual void show() override;
        virtual int calculateSalary(int value) override;

};

#endif // DEVELOPER_H

#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "Employee.h"


class TeamLeader: public Employee
{
    public:
        TeamLeader();
        TeamLeader(string surname1, int age1,int experience1, double salary1);
        virtual ~TeamLeader();

        double calculateBonus(int value);
        virtual int calculateSalary(int value) override;
        virtual void show() override;


};

#endif // TEAMLEADER_H

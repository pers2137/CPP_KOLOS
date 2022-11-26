#include <iostream>
#include "Employee.h"
#include "Developer.h"
#include "TeamLeader.h"


using namespace std;

void whoWorkMoreThan5Years(Employee ** tab, int rozmiar);
void howManyEarnLessThanMeanBonus(Employee ** tab, int rozmiar);


int main()
{
    Employee ** tab = new Employee*[10];
    tab[0] = new Developer("Tom",45,15,18000);
    tab[1] = new Developer("Tom",25,2,8500);
    tab[2] = new Developer("Tom",55,25,22000);
    tab[3] = new Developer("Tom",28,3,10000);
    tab[4] = new Developer("Tom",36,5,12000);
    tab[5] = new Developer("Tom",31,4,13000);
    tab[6] = new Developer("Tom",19,1,3000);
    tab[7] = new TeamLeader("Tom",54,30,30000);
    tab[8] = new TeamLeader("Tom",39,13,24000);
    tab[9] = new TeamLeader("Tom",29,7,22500);

    cout << " ----------------------- " << endl;
    cout << " Who work more than 5 years:" << endl;
    whoWorkMoreThan5Years(tab,10);
    cout << " ----------------------- " << endl;
    cout << " Who Earn Less than mean salary" << endl;
    howManyEarnLessThanMeanBonus(tab,10);
    cout << " ----------------------- " << endl;


    for(int i =0;i<10;i++)
    {
        delete tab[i];
    }
    delete [] tab;

    return 0;
}


void whoWorkMoreThan5Years(Employee ** tab, int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
        if(tab[i]->getExperience() > 5)
            tab[i]->show();

}

void howManyEarnLessThanMeanBonus(Employee ** tab, int rozmiar)
{
     double average = 0;

     for(int i=0;i<rozmiar;i++)
        average += tab[i]->getSalary();

     average = average / rozmiar;
     cout << " Mean salary: " << average << endl;
     for(int i=0;i<rozmiar;i++)
        if(tab[i]->getSalary() < average)
            tab[i]->show();

}

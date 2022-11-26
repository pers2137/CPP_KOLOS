#ifndef PERSON_H
#define PERSON_H


using namespace std;
#include <iostream>

class Person
{
    public:
    string name;
    int age;
    void show ()const;
};

 void Person::show () const{
 cout<<"name: "<<name<<" age: "<<age<<endl;
 }


#endif // PERSON_H_INCLUDED

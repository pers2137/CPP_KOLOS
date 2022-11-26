#ifndef CONTACT_H
#define CONTACT_H

#include<iostream>
using namespace std;

class Contact
{
    public:
        string full_name;
        int age;
        string number;
        string street;
        void show()const;


    public:
        Contact(string f, int a, string n, string s);
        virtual ~Contact();

    protected:


};

#endif // CONTACT_H

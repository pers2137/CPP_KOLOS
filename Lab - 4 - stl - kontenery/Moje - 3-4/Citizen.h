#ifndef CITIZEN_H
#define CITIZEN_H

#include<iostream>

using namespace std;


class Citizen
{
    private:

        string name;
        string surname;
        int age;
        char sex;
        string postal_code;

    public:
        Citizen();
        Citizen(string name1,string surname1,int age1, char sex1 ,string postal_code1);
        virtual ~Citizen();

        void show();
        void setName(string name1);
        void setSurname(string surname1);
        void setAge(int age1);
        void setSex(char sex1);
        void setPostal_code(string postal_code1);

        string getName();
        string getSurename();
        int getAge();
        char getSex();
        string getPostal_Code();

};

#endif // CITIZEN_H

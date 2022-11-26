#include "Citizen.h"

Citizen::Citizen()
{
    name = "Brak";
    surname = "Brak";
    age = 0;
    sex = '?';
    postal_code = "xx-xxx";
}

Citizen::Citizen(string name1,string surname1,int age1, char sex1,string postal_code1)
{
    name = name1;
    surname = surname1;
    age = age1;
    sex =  sex1;
    postal_code = postal_code1;
}

Citizen::~Citizen()
{
    //dtor
}


void Citizen::setName(string name1){    name = name1;}
void Citizen::setSurname(string surname1){    surname = surname1;}
void Citizen::setAge(int age1){    age = age1;}
void Citizen::setSex(char sex1){sex = sex1;}
void Citizen::setPostal_code(string postal_code1){postal_code = postal_code1;}

string Citizen::getName(){return name;}
string Citizen::getSurename(){return surname;}
int Citizen::getAge(){return age;}
char Citizen::getSex(){return sex;}
string Citizen::getPostal_Code(){return postal_code;}


void Citizen::show()
{
    cout << "Name: " << name << " | Surname: " << surname << " | Age: " << age << " | Sex: " << sex << " | Post Code: " << postal_code << endl;
}


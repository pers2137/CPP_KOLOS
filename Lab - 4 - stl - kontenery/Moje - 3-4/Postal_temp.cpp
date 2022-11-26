#include "Postal_temp.h"

Postal_temp::Postal_temp(string name)
{
    postal_code = name;
    count = 1;
}

Postal_temp::~Postal_temp()
{
    //dtor
}


string Postal_temp::getCode(){return postal_code;}
int Postal_temp::getCount(){return count;}
void Postal_temp::addCount(){count++;}
void Postal_temp::show(){cout << postal_code << " ->" << count << " mieszkancow" << endl;}

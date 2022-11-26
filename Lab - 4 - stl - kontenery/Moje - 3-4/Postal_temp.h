#ifndef POSTAL_TEMP_H
#define POSTAL_TEMP_H
#include<iostream>
using namespace std;

class Postal_temp
{
    private:
        string postal_code;
        int count;
    public:
        Postal_temp(string name);
        string getCode();
        int getCount();
        void addCount();
        void show();
        virtual ~Postal_temp();




};

#endif // POSTAL_TEMP_H

#include "Funct_length.h"

Funct_length::Funct_length()
{
    //ctor
}

Funct_length::~Funct_length()
{
    //dtor
}


bool Funct_length::operator( )(int s1, int s2)
{
    int sum1 = 0;
    while(s1  > 0)
    {
        sum1 = sum1 + 1;
        s1 = s1/10;
    }

    int sum2 = 0;
    while(s2 > 0)
    {
        sum2 = sum2 + 1;
        s2 = s2/10;
    }


    if (sum1 > sum2)
        return true;
    else
        return false;
}

#include "Func_sum.h"

Func_sum::Func_sum()
{
    //ctor
}

Func_sum::~Func_sum()
{
    //dtor
}


bool Func_sum::operator( )(int s1, int s2)
{
    int sum1 = 0;
    while(s1  > 0)
    {
        sum1 = sum1 + s1%10;
        s1 = s1/10;
    }

    int sum2 = 0;
    while(s2 > 0)
    {
        sum2 = sum2 + s2%10;
        s2 = s2/10;
    }


    if (sum1 < sum2)
        return true;
    else
        return false;
}

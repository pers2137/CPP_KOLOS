#include "MaxBufor.h"
#include <iostream>

using namespace std;

MaxBufor::MaxBufor()
{
    //ctor
}

MaxBufor::MaxBufor(int siz1):Bufor(siz1)
{

}

MaxBufor::~MaxBufor()
{
    //dtor
}

//ZDEFINIOWAÆ CALCULATE ORAZ ADD I PO TESTOWAÆ :)

double MaxBufor::calculate()
{

    double max = -1;
    for(int i=0;i<getIndex();i++)
    {
        if(max < getTab(i)) max = getTab(i);
    }
    return max;
}

void MaxBufor::add(int value)
{
    if(getSize() <= getIndex())
    {
        cout << "Buffor is full. " << endl;
    }
    else
    {
        setFirst(value);
    }

}

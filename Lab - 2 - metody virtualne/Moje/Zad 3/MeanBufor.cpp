#include "MeanBufor.h"

MeanBufor::MeanBufor()
{

}

MeanBufor::MeanBufor(int siz1):Bufor(siz1)
{

}

MeanBufor::~MeanBufor()
{

}


double MeanBufor::calculate()
{
    double mean=0;
    for(int i=0;i<getIndex();i++)
    {
        mean += getTab(i);
    }

    if(getIndex()==0) return 0;

    return mean/getIndex();
}

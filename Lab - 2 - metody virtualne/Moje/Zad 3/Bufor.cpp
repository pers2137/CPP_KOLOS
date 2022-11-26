#include "Bufor.h"
#include <iostream>
using namespace std;

Bufor::Bufor()
{
   index = 0;
   siz = 10;
   pointer = new int[10];
}


Bufor::Bufor(int siz1)
{
   index = 0;
   siz = siz1;
   pointer = new int[siz1];
}

Bufor::~Bufor()
{
    delete pointer;
}


void Bufor::add(int value)
{
    pointer[index] = value;
    index++;

}

int Bufor::getIndex(){return index;}
int Bufor::getSize(){return siz;}
int Bufor::getTab(int i){return pointer[i];}
int Bufor::getFirst(){return index;}
void Bufor::setTab(int pos, int value){pointer[pos] = value;}
void Bufor::setFirst(int value)
{
    pointer[index] = value;
    index++;

}

void Bufor::show()
{
    cout << "Table values: [ ";
    for(int i=0;i<index;i++)
    {
      cout <<  pointer[i] << " ";
    }
    cout << " ]" << endl;
}



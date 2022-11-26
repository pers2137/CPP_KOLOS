#ifndef MAXBUFOR_H
#define MAXBUFOR_H
#include "Bufor.h"

class MaxBufor: public Bufor
{
    public:
        MaxBufor();
        MaxBufor(int siz1);
        virtual ~MaxBufor();

        virtual void add(int value) override;
        virtual double calculate() override;

};

#endif // MAXBUFOR_H

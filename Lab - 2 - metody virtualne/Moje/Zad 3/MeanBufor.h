#ifndef MEANBUFOR_H
#define MEANBUFOR_H
#include "Bufor.h"

class MeanBufor: public Bufor
{
    private:

    public:
        MeanBufor();
        MeanBufor(int siz1);
        virtual ~MeanBufor();

        virtual double calculate() override;


};

#endif // MEANBUFOR_H

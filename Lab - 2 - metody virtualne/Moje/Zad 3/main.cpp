#include <iostream>
#include <time.h>
#include "cstdlib"

#include "Bufor.h"
#include "MeanBufor.h"
#include "MaxBufor.h"


using namespace std;

int main()
{
    srand (time(NULL));
    Bufor* bufor;
    MeanBufor meanbuf = MeanBufor(12);
    MaxBufor maxbuf = MaxBufor(8);


    for(int i=0; i<12; i++)
    {
        meanbuf.add(rand() % 250);
        maxbuf.add(rand() % 250);
    }

    cout << "\n\n\n--- MeanBufor --- " << endl;
    bufor = &meanbuf;
    bufor->show();
    cout << "Mean  buf: "<< bufor->calculate() << endl << endl;

    cout << "--- MeanBufor --- " << endl;
    bufor = &maxbuf;
    bufor->show();
    cout << "Max value buf: "<< bufor->calculate() << endl;

    /*
    Bufor buf =  Bufor();

    buf.show();
    buf.add(5);
    buf.add(1);
    buf.add(222);
    buf.show();
    buf.add(5);
    buf.add(1);
    buf.add(222);
    buf.add(5);
    buf.add(1);
    buf.add(222);
    buf.show();
    */
    /*
    MeanBufor buf =  MeanBufor();
    MeanBufor buf2 =  MeanBufor(3);

    buf.add(3);
    buf.add(1);
    buf.add(10);
    buf.add(2);
    cout << "Srednia : " << buf.calculate() << endl;
    buf.show();

    buf2.add(5);
    buf2.add(5);
    buf2.add(5);
    buf2.add(5);
    buf2.add(5);
    cout << "Srednia : " << buf2.calculate() << endl;
    buf2.show();
    */
    /*
    MaxBufor buf =  MaxBufor();
    MaxBufor buf2 =  MaxBufor(3);

    buf.add(101);
    buf.add(1);
    buf.add(10);
    buf.add(2);
    cout << "Max wartosc : " << buf.calculate() << endl;
    buf.show();

    buf2.add(5);
    buf2.add(101);
    buf2.add(5);
    buf2.add(5);
    buf2.add(5);
    cout << "Max wartosc : " << buf2.calculate() << endl;
    buf2.show();
    */
    return 0;
}

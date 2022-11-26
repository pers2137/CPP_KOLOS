#ifndef BUFOR_H
#define BUFOR_H


class Bufor
{
    private:
        int* pointer;
        int siz;
        int index;

    public:
        Bufor();
        Bufor(int siz1);
        virtual ~Bufor();

        virtual void add(int value);
        virtual double calculate()=0;
        int getIndex();
        int getSize();
        int getTab(int i);
        int getFirst();
        void setFirst(int value);
        void setTab(int pos, int value);
        void show();

};

#endif // BUFOR_H

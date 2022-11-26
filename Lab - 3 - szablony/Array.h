#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array
{
    private:
        T* tab;
        int size;
        int index;
    public:
        Array();
        Array(int size1);
        virtual ~Array();

        void show();
        void add(T value);
        T  getIndex(int indexx);
        T getMax();
        //non add
        void sortAsc();

};


template <typename T>
Array<T>::Array()
{
 size = 10;
 index = 0;
 tab = new T[10];
}

template <typename T>
Array<T>::Array(int size1)
{
 size = size1;
 index = 0;
 tab = new T[size1];
}

template <typename T>
Array<T>::~Array()
{
 delete tab;
}

template <typename T>
void Array<T>::show()
{
    for(int i=0;i<index;i++)
    {
        cout <<"Tab["<<i<<"] = "<< tab[i] << endl;
    }
}

template <typename T>
void Array<T>::add(T value)
{
    if(index < size)
    {
        tab[index] = value;
        index++;
    }
    else
    cout << "Brak miejsca" << endl;
}

template <typename T>
T Array<T>::getMax()
{
    T max = 0;
    if( index > 0) max = tab[0];
    for(int i=0;i<index;i++)
    {
        if(max < tab[i]) max = tab[i];
    }

    return max;
}

template <typename T>
T Array<T>::getIndex(int indexx)
{
    //T t =0;
    if(indexx < index) return tab[indexx];

    cout << "Index z poza tablicy. ";
}

template <typename T>
void Array<T>::sortAsc()
{
    for(int i=0;i<index;i++)
        for(int j=i;j<index;j++)
            if(tab[i] > tab[j] ) swap(tab[i],tab[j]);

}


// SPECJALIZACJA FUNKCJI
template<>
void Array<string>::sortAsc()
{
   for(int i=0;i<index;i++)
        for(int j=i;j<index;j++)
            if(tab[i].size() > tab[j].size() ) swap(tab[i],tab[j]);
}

template<>
string Array<string>::getMax()
{
    string max = "";
    if( index > 0) max = tab[0];
    for(int i=0;i<index;i++)
    {
        if(max.size() < tab[i].size()) max = tab[i];
    }

    return max;
}


#endif // ARRAY_H

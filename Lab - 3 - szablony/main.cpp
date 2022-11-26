#include <iostream>
#include <limits>
#include "Adding.h"
#include "Student.h"
#include "Array.h"

using namespace std;

template <typename T>
void mySwap(T& a, T& b);

template <typename T>
void showAll(T* tab[], int n);

template <typename T>
void checkType(T a);

template <typename T>
void showMin(T* tab[], int n);

int main()
{
    //ZAD 1
    /*
    cout << "Zamiana" << endl;
    int a=6;
    int b=8;
    cout<<"przed: "<<a<<" "<<b<<endl;
    mySwap<int>(a,b);
    cout<<"po: "<<a<<" "<<b<<endl;
    cout << "-------------------" << endl << endl;

    Adding<int> a1(5);
    a1.add(6);
    a1.show();
    Adding<string> a2("Pro");
    a2.add("gramowanie");
    a2.show();
    cout << "\n -------------------" << endl << endl;

    Student<float> s(5,"Ala");
    s.showMark();
    Student<int> s1(5,"Ala");
    s1.showMark();
    Student<string> s2(5,"Ala");
    s2.showMark();
    cout << "\n -------------------" << endl << endl;


    Adding<int>* arrAdd[3];
    for(int i=0;i<3;i++)
    {
        arrAdd[i]=new Adding<int>(i);
    }
    showAll(arrAdd,3);

    Student<string>* arrStu[2];
    for(int i=0;i<3;i++)
    {
     arrStu[i]=new Student<string>(i+2,"Ala");
    }

    showAll(arrStu,3);

    for(int i=0; i<3; i++)
        delete arrAdd[i];
    for(int i=0; i<2; i++)
        delete arrStu[i];

    cout << "\n -------------------" << endl << endl;

    checkType<int>(3);
    checkType<float>(3);
    checkType<short>(3);
    */
    // ZAD 2
    /*

    int* t[5] ;
    t[0] = new int(11);
    t[1] = new int(2);
    t[2] = new int(3);
    t[3] = new int(4);
    t[4] = new int(5);
    showMin(t,5);

    float* t1[5] ;
    t1[0] = new float(11.3);
    t1[1] = new float(2.9);
    t1[2] = new float(31);
    t1[3] = new float(0.4);
    t1[4] = new float(5);
    showMin(t1,5);



    delete t;
    delete t1;
    */
    //ZAD 3
    //Int
    /*
    Array<int> arr(8);
    cout << "<Int> Array" << endl;
    arr.add(344);
    arr.add(2);
    arr.add(313);
    arr.add(13);
    arr.add(-5);
    arr.add(6);
    arr.add(6);
    arr.add(3236);
    arr.add(-1);
    cout << "Max element: " << arr.getMax() << endl;
    cout << "Index - 2: " << arr.getIndex(2) << endl;
    cout << "Index - 6: " << arr.getIndex(6) << endl;
    cout << "---------------- Przed sortowaniem" << endl;
    arr.show();
    arr.sortAsc();
    cout << "---------------- Po sortowaniu" << endl;
    arr.show();
    */
    //STRING
     cout << "<string> Array" << endl;
    Array<string> arr2(5);
    arr2.add("ar2d");
    arr2.add("ol");
    arr2.add("a");
    arr2.add("bb");
    arr2.add("bb2e1e");
    arr2.add("bb2edqdq1e");
    cout << "Max element: " << arr2.getMax() << endl;
    cout << "Index - 2: " << arr2.getIndex(2) << endl;
    cout << "Index - 4: " << arr2.getIndex(4) << endl;
    cout << "---------------- Przed sortowaniem" << endl;
    arr2.show();
    arr2.sortAsc();
    cout << "---------------- Po sortowaniu" << endl;
    arr2.show();



    return 0;
}


template <typename T>
void mySwap(T& a, T& b)
{
 T temp;
 temp=a;
 a=b;
 b=temp;
}

template <typename T>
void showAll(T* tab[], int n)
{
 for(int i=0;i<n;i++)
 tab[i]->show();
}

template <typename T>
void checkType(T a)
{
    T val=numeric_limits<T>::max();
    cout<<val<<endl;
}


template <typename T>
void showMin(T* tab[], int n)
{
    T* minn;
    if(n > 0) minn = tab[0];
    for(int i=0;i<n;i++)
    {
        if(*minn > *tab[i]) minn = tab[i];
    }
    cout << "Min value: " << *minn << endl;
}

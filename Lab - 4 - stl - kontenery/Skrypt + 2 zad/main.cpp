#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <time.h>

#include "Even.h"
#include "Compare.h"
#include "Student.h"

using namespace std;

template <typename T>
void show(T &con);

void add10(int &el);
void print(int& el);
bool isEven(int x);
void showMark(Student &s);
void program_zad_2();

int main()
{
 /*
 vector<int> vec;
 vec.push_back(1);
 vec.push_back(2);
 vec.push_back(3);
 cout<<"Operator[]"<<endl;

 for(int i=0; i<vec.size(); i++)
    cout<<vec[i]<<" ";

 cout<<endl;
 cout<<"At"<<endl;

 for(int i=0; i<vec.size(); i++)
    cout<<vec.at(i)<<" ";
 cout<<endl;

 cout<<"Iterator: "<<endl;
 vector <int>::iterator it;

 for(it=vec.begin(); it != vec.end(); it++ )
    cout <<*it<<" ";

 cout<<endl;
 cout<<"begin() "<< *vec.begin()<<" front() "
 <<vec.front()<<endl;

 cout<<"end() "<< *(vec.end()-1)<<" back() "
 <<vec.back()<<endl;

 cout << "---------" << endl;
 vec.push_back(11);
 vec.push_back(52);
 show(vec);
 cout << "---------" << endl;
 vec.pop_back();
 show(vec);
 vec.erase(vec.begin()+1,vec.begin()+2);
 show(vec);
 vec.insert(vec.begin()+1,100);
 show(vec);
 vec.clear();
 show(vec);
 cout << "------------------------" << endl;
 vector<float>vec2(5,8.2);
 show(vec2);
 vec2.push_back(3.1);
 show(vec2);
 */
 /*
 vector<int>num={3,6,3,8,9,1,3};
 show(num);
 sort(num.begin(),num.end());
 show(num);
 cout<<"binary search"<<endl;
 cout<<binary_search(num.begin(),num.end(),3)<<endl;
 cout<<"count"<<endl;
 cout<<count(num.begin(),num.end(),3)<<endl;
 cout<<"reverse"<<endl;
 reverse(num.begin(),num.begin()+4);
 show(num);
 cout<<"random_shuffle"<<endl;
 random_shuffle(num.begin(),num.end());
 show(num);
 cout<<"max element"<<endl;
 cout<<*max_element(num.begin(),num.end())<<endl;
 cout<<"merge"<<endl;
 vector<int>num2(4,6);
 vector<int>res(num.size()+num2.size());
 sort(num.begin(),num.end());
 merge(num.begin(),num.end(),num2.begin(),
 num2.end(),res.begin());
 show(res);
 */
/*
 vector<int>num={3,6,3,8,9,1,4};
 show(num);
 for_each(num.begin(),num.end(),print);
 for_each(num.begin(),num.end(),add10);
 cout<<endl;
 for_each(num.begin(),num.end(),print);
 cout<<endl;
 cout<<count_if(num.begin(),num.end(),isEven);


 vector<int> num3={2, -6, 7, 3, 0, 8, -9, -2};
 for_each(num3.begin(),num3.end(),print);
 int howMany=count_if(num3.begin( ), num3.end( ),
 bind2nd(greater<int>( ),0));
 cout<<endl<<"wersja1: wartosc > 0 "<<howMany<<endl;
 greater<int> f;
 howMany=count_if(num3.begin( ), num3.end( ),
 bind2nd(f,0));
 cout<<"wersja2: wartosc > 0 "<<howMany<<endl;
 cout<<"Przed sortowaniem"<<endl;
 for_each(num3.begin(),num3.end(),print);
 sort(num3.begin( ), num3.end( ), greater<int>());
 cout<<endl<<"Po sortowaniu"<<endl;
 for_each(num3.begin(),num3.end(),print);

 for_each(num.begin(),num.end(),print);
 cout<<endl;
 cout<<count_if(num.begin(),num.end(),isEven)<<endl;
 cout<<count_if(num.begin(),num.end(),Even(2))<<endl;

 vector<Student>st;
 st.push_back(Student(1,"Ala"));
 st.push_back(Student(5,"Ola"));
 st.push_back(Student(2,"Piotr"));
 for_each(st.begin(),st.end(),showMark);
 cout<<endl;
 sort(st.begin(),st.end(),Compare());
 for_each(st.begin(),st.end(),showMark);
*/
    srand( time( NULL ) );
    program_zad_2();

 return 0;
}

//ZAD 2

void program_zad_2()
{
    vector<int> vect;
    int x =  rand()%20+1;
    cout << x << endl;

    for(int i=0;i<x;i++)
    {
        int y = rand()%201-100;
        bool add = false;
        for(int j=0;j<vect.size();j++)
        {
            if(vect.at(j) < 0)
            {
                vect.insert(vect.begin()+j,y);
                add = true;
                break;
            }
        }
        if(add == false)
            vect.push_back(y);
    }

    for(int i=0; i<vect.size(); i++)
    cout<<vect.at(i)<<" ";

}




template <typename T>
void show(T &con)
{
 for(typename T::iterator it=con.begin( );
    it!=con.end( ); it++)
    cout<<*it<<" ";
 cout<<endl;
}

void print(int& el)
{
 cout<<el<<"***";
}
void add10(int &el)
{
 el=el+10;
}
bool isEven(int x)
{
 if (x%2 == 0)
 return true;
 else
 return false;
}

void showMark(Student &s)
{
 cout<<s.getMark()<<" ";
}

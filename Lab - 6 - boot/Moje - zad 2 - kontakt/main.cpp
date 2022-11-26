#include <iostream>
#include "Contacts.h"
#include <vector>
#include <numeric>

#include <boost/fusion/container.hpp>
#include <boost/fusion/sequence.hpp>
#include <boost/mpl/int.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/random_access_index.hpp>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>

#include <map>

using namespace boost::multi_index;


using namespace std;

template <class T>
void zad_3(vector<T> t);
void zad_4(boost::fusion::vector<int, double, float , bool, char> v);


int main()
{

    /*
    Contacts c;
    c.add("Adam Xa",22,"123123123","Nadbystrzycka");
    c.add("Tomek Kowalski",32,"1111111","Nadbystrzycka");
    c.add("Tomek Kowalski",32,"1111111","Nadbystrzycka");
    c.add("Jola Kowalski",12,"2222222","Nadbystrzycka");
    c.add("Lukasz Olejnik",29,"3333333","Zamkowa");
    c.add("Kasia Olejnik",34,"4444444","Zamkowa");
    c.add("Wojtek Wojtek",66,"5555555","Okopowa");
    c.show();

    cout << "\n------  Usuwanie ----" << endl;
    c.drop("2222222");
    c.show();

    cout << "\n------  Znajdz mieszkancow ulicy ----" << endl;
    c.findByStreet("Nadbystrzycka");

    cout << "\n------  Znajdz miedzy wiekiem 20-30 ----" << endl;
    c.findBeetwenAge(20,30);

    cout << "\n------  Znajdz po numerze telefonu ----" << endl;
    c.findByPhone("4444444");
    cout << endl;
    c.countAdult();
    c.uniqueLastName();

    cout << "\n------  Zmiana ulicy ----" << endl;
    c.changeStreet("Nadbystrzycka","Wesola");
    c.show();
    */

    //ZAD 3
    vector<int> vec= {9,1,2,3,9,-3,4,5, 6};
    zad_3(vec);
    cout << endl << endl;
    vector<double> vec2 = {3.21 ,2.33, 22.1, 5 , 11.33, -5.22, - 8, -12 };
    zad_3(vec2);


    boost::fusion::vector<int, double, float , bool, char> v { 10, 22.22,11.11,true, 'a' };
    auto v2 = push_back(v, 'a' );

    //zad_4(v2);

    return 0;
}

template <class T>
void zad_3(vector<T> t)
{

  T x = 0;
  T m = 0;
  cout << "Zawartosc vectora " << endl;
  for(int i=0;i<t.size();i++)
  {
      x = x + t.at(i);
      cout << t.at(i) <<" ";
  }
  cout << endl;

  if(t.size() %2 == 0)
  {
    m = (t.at(t.size() / 2 ) + t.at((t.size() / 2) -1 ) )/ 2;
  }
  else
  {
      m = t.at(t.size() / 2  );
  }
  x = x / t.size();
  cout << "Mediana: " << m << endl;
  cout << "Srednia: " << x << endl;



   cout << "Liczby mniejsze od sredniej" << endl;
  for(int i=0;i<t.size();i++)
  {
      if(t.at(i) < x)
        cout << t.at(i) << " ";

  }
  cout << endl;
  cout << "Liczby dodatnie" << endl;
  for(int i=0;i<t.size();i++)
  {
      if(t.at(i) > 0)
        cout << t.at(i) << " ";

  }

  cout << endl;

  cout << "Liczby miedzy srednio a mediano" << endl;
  if(m > x)
  {
      for(int i=0;i<t.size();i++)
      {
          if(t.at(i) > x && t.at(i) < m)
            cout << t.at(i) << " ";
      }
  }
  else
  {
      for(int i=0;i<t.size();i++)
      {
          if(t.at(i) < x && t.at(i) > m)
            cout << t.at(i) << " ";
      }
  }

  cout << endl;

}



/*
class Print
{
 public:
  static map<string, int> m;

 template <typename T>
 void operator()(T t)
{
    cout << t <<endl;

    string x = typeid(T).name();
    if(m.count( x ))
    {
        m[x] = m[x]+1;
    }
    else
    {
       m.insert({x,0});
    }

}
};


void zad_4(boost::fusion::vector<int, double, float , bool, char> v)
{

  Print p;
  boost::fusion::for_each(v,p);

  cout << p.m.size() << endl;

  for(auto it = p.m.cbegin(); it != p.m.cend(); ++it)
  {
      cout << it->first; //" " << it->second.first << endl;
  }

}*/


#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <iostream>
#include "Person.h"
#include <boost/bind.hpp>
// --- 2 czensc
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/random_access_index.hpp>

using namespace boost::multi_index;
using namespace std;

typedef multi_index_container<Person,indexed_by<
hashed_non_unique<member<Person, string, &Person::name>>,
hashed_non_unique<member<Person, int, &Person::age>>
>> person_multi;

typedef person_multi::nth_index<0>::type name_type;
typedef person_multi::nth_index<1>::type age_type;

void UlaToUrszula(Person& x)
{
    x.name="Urszula";
}

void AlaToAlicja(Person& x)
{
   if(x.name=="Ala")
   x.name="Alicja";
}


// --- 2 czensc
typedef multi_index_container<Person,indexed_by<
ordered_non_unique<member<Person,string,&Person::name>>,
ordered_non_unique<member<Person,int,&Person::age>>,random_access<> >> person_multi_2;
typedef person_multi_2::nth_index<0>::type name_type2;

typedef person_multi_2::nth_index<1>::type age_type2;

// --- Boost.fushion

#include <boost/fusion/container.hpp>
#include <boost/fusion/sequence.hpp>
#include <boost/mpl/int.hpp>

// --- Boost.Bind:
// --- zrobic w oddzielnym mainie :)
#include <boost/bind.hpp>

 class Print
 {
    public:
    template <typename T>
    void operator()(T t)
    {
     cout << t <<endl;
    }

 };






 int main()
 {

     person_multi persons;
     persons.insert({"Ala", 40});
     persons.insert({"Piotr", 10});
     persons.insert({"Ola", 18});
     persons.insert({"Ala", 46});
     persons.insert({"Ula", 46});

 cout<< "Liczba osob o imieniu Ala: "<<persons.count("Ala")<< endl;
 cout<<"Liczba osob o imieniu Ala: "<<persons.get<0>().count("Ala")<<endl;

 age_type &age_index = persons.get<1>();

 cout<< "Liczba osob z wiekiem 18 lat: "<<age_index.count(18)<< endl;
//
// for(name_type::iterator it=persons.get<0>().begin();
// it != persons.get<0>().end(); ++it)
//    it->show();
//
for(age_type::iterator it=persons.get<1>().begin();it != persons.get<1>().end(); ++it)
    it->show();


 auto &age_indexx = persons.get<1>();
 auto it = age_indexx.find(46);

 cout<<"Znaleziona osoba, ktora ma 46 lat "<<it->name<<endl;


 auto &name_indexx = persons.get<0>();
 auto itt = name_indexx.find("Ula");
 name_indexx.modify(itt, boost::bind(UlaToUrszula,_1));


 cout << "\n\n\nPrzed modyfikacja: "<<endl;
 vector<name_type::iterator> elements;
 for(name_type::iterator it=persons.get<0>().begin();it != persons.get<0>().end(); ++it)
 {
    it->show();
    elements.push_back(it);
 }

 for (int i = 0; i<elements.size();i++)
    name_indexx.modify(elements[i],boost::bind(AlaToAlicja,_1));


 cout << "Po modyfikacji"<<endl;
 for(name_type::iterator it=persons.get<0>().begin();
 it != persons.get<0>().end(); ++it)
 {
    it->show();
 }

//2
 /*
 person_multi_2 persons2;
 persons2.get<2>().push_back({"Ala", 40});
 persons2.get<2>().push_back({"Ala", 45});
 persons2.get<2>().push_back({"Piotr", 10});
 persons2.get<2>().push_back({"Ola", 18});
 persons2.get<2>().push_back({"Aga", 46});
 persons2.get<2>().push_back({"Ula", 46});

 auto &name_indexx2 = persons2.get<0>();
 auto iterStart = name_indexx2.equal_range("Ala");
 auto iterStop = name_indexx2.equal_range("Piotr");
 cout <<"przedzial od Ala do Piotr - wersja 1"<<endl;

 for (name_type2::iterator it=iterStart.first;it != iterStop.second; ++it)
    it->show();

 auto from = name_indexx2.lower_bound("Ala");
 auto to = name_indexx2.upper_bound("Piotr");
 cout <<"przedzial od Ala do Piotr - wersja 2"<<endl;

 for (auto it=from; it != to; ++it)
    it->show();

 auto &rand_indexx = persons2.get<2>();
 cout << rand_indexx[0].name <<endl;
*/
/*
 boost::fusion::vector<int, string, bool, double> vec{10,"C++", true, 3.14};
 cout << "Trzeci element w vec:"<<boost::fusion::at<boost::mpl::int_<2>>(vec) <<endl;
 auto vec2 = push_back(vec, 'M');
 cout <<"Liczba elementow w wvec: "<< size(vec) <<endl;
 cout << "Liczba elementow w vec2: "<<size(vec2) <<endl;
 cout << "Pierwszy element w vec2: "<<front(vec2) <<endl;
 cout << "Ostatni element w vec2: "<<back(vec2) <<endl;
 cout<<"Cala zawartosc vec2: "<<endl;
 boost::fusion::for_each(vec2,Print());

 auto itvStart = begin(vec);
 auto itvStop = end(vec);

 cout<<"Pierwszy element: "<<*itvStart<<endl;
 cout<<"Drugi element: "<<*next(itvStart)<<endl;
 cout<<"Trzeci element: "<<*advance<boost::mpl::int_<2>>(itvStart)<<endl;
*/
 //Boost.Bind:




 return 0;
 }

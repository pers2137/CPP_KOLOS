#ifndef CONTACTS_H
#define CONTACTS_H

#include<Contact.h>
#include <boost/bind.hpp>
#include<iostream>


#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <Set>



using namespace std;
using namespace boost::multi_index;


   typedef multi_index_container<Contact,indexed_by<
    hashed_non_unique<member<Contact, string, &Contact::full_name>>,
    hashed_non_unique<member<Contact, int, &Contact::age>>,
    hashed_unique<member<Contact, string, &Contact::number>>,
    hashed_non_unique<member<Contact, string, &Contact::street>>
    >> contact_multi;

    typedef contact_multi::nth_index<0>::type name_type;
    typedef contact_multi::nth_index<1>::type age_type;
    typedef contact_multi::nth_index<2>::type number_type;
    typedef contact_multi::nth_index<3>::type street_type;

class Contacts
{
    private:
        //void changer(Contact& x);

        contact_multi contacts;

    public:
        Contacts();
        virtual ~Contacts();

        void add(string f, int a, string n, string s);
        void show();
        void drop(string n);
        void findByStreet(string s);
        void findBeetwenAge(int a, int b);
        void findByPhone(string number);
        void countAdult();
        void uniqueLastName();
        void changeStreet(string s, string x);


    protected:


};

#endif // CONTACTS_H

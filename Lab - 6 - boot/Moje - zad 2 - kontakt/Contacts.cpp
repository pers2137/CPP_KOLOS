#include "Contacts.h"

Contacts::Contacts()
{
   contact_multi contacts;
}

Contacts::~Contacts()
{
    //dtor
}


void Contacts::add(string f, int a, string n, string s)
{

    contacts.insert({f,a,n,s});
}

void Contacts::show()
{
    for(name_type::iterator it=contacts.get<0>().begin();it != contacts.get<0>().end(); ++it)
        it->show();

}

void Contacts::drop(string n)
{
    for(name_type::iterator it=contacts.get<0>().begin();it != contacts.get<0>().end(); ++it)
    {
        if(it->number == n)
        {
             it = contacts.erase(it);
             ++it;
             //cout << " Usuniento" << endl;
        }
    }
}

void Contacts::findByStreet(string s)
{
    for(name_type::iterator it=contacts.get<0>().begin();it != contacts.get<0>().end(); ++it)
    {
        if(it->street == s)
        {
             it->show();
        }
    }

}

void Contacts::findBeetwenAge(int a, int b)
{
    for(name_type::iterator it=contacts.get<0>().begin();it != contacts.get<0>().end(); ++it)
    {
        if((it->age >= a) && (it->age <= b))
        {
             it->show();
        }
    }

}

void Contacts::findByPhone(string number)
{
    auto &age_indexx = contacts.get<2>();
    auto it = age_indexx.find(number);
    it->show();

}

void Contacts::countAdult()
{
    int counter = 0 ;
     for(name_type::iterator it=contacts.get<0>().begin();it != contacts.get<0>().end(); ++it)
    {
        if( it->age >= 18 )
        {
             counter++;
        }
    }

    cout << "Count of adult people: " << counter << endl;
}

void Contacts::uniqueLastName()
{
    set<string> st;

    for(name_type::iterator it=contacts.get<0>().begin();it != contacts.get<0>().end(); ++it)
    {
        string name = it->full_name;
        string  token =  name.substr(name.find(" ")+1 , name.length());
        st.insert(token);
    }
    //cout << *st.begin() << endl;
    cout << "Number of unique name: " << st.size() << endl;

}


void changer(Contact& x, string s, string ss)
{
    if(x.full_name == "ss")
     x.full_name = "ss";
}


void Contacts::changeStreet(string s, string x)
{


     auto &name_indexx = contacts.get<3>();
     vector<street_type::iterator> elements;
     for(street_type::iterator it=contacts.get<3>().begin();it != contacts.get<3>().end(); ++it)
     {
        elements.push_back(it);
     }

     for (int i = 0; i<elements.size();i++)
     {
        name_indexx.modify(elements[i], [s,x](auto& c){if (c.street == s) c.street = x; });
     }

}




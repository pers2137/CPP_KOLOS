#include "Contact.h"

Contact::Contact(string f, int a, string n, string s)
{
    full_name = f;
    age = a;
    number = n;
    street = s;
}

Contact::~Contact()
{
    //dtor
}

void Contact::show()const
{
    cout << full_name << " | " << age << " | " << number << " | " << street << endl;

}

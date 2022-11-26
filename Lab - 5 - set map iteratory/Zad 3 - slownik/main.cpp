#include <iostream>


#include "Dictionary.h"

using namespace std;

int main()
{
    Dictionary d;

    //DODAWANIE
    cout << "--- DODAWANIE ---" << endl;
    d.add("home","dom");
    d.add("remote","zdalny");
    d.add("penny","pens");
    d.add("justice","sprawiedliwosc");
    d.add("home","dom");
    d.add("apple","jablko");
    d.add("salary","wyplata");
    d.add("society","spolecenstwo");
    d.show_dictionary();

    //USUWANIE
    cout << "--- USUWANIE ---" << endl;
    d.drop("home");
    d.drop("home");
    d.drop("remote");
    d.show_dictionary();

    //TRANSLACJA WYBRANEGO SLOWA
    cout << endl << "--- TRANSLACJA ---" << endl;
    d.show_translation("salary");
    d.show_translation("justice");
    d.show_translation("----");

     cout << endl << "------ SORT ------" << endl;
     d.show_z_a();




    return 0;
}

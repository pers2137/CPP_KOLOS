#include <iostream>
#include <vector>
#include <algorithm>

#include "Citizen.h"
#include "City.h"
#include "Func_sum.h"
#include "Funct_length.h"

using namespace std;

void showCities(vector<City> c);
void the_most(vector<City> c, int mode);
void statatistic(vector <City> c);
void sort_cities(vector <City> &c);

void mode_1(vector<City> c);
void mode_2(vector<City> c);

//zad 4.
void print(int& el)
{
  cout<<el<<" ";
}


int main()
{
    //TEST KLAS
    /*
    Citizen c1;
    Citizen c2("Adam","Bahonko",22,'m',"21-500");
    Citizen c3("Jola","Klej",17,'k',"22-500");
    Citizen c4("Ola","Klej",11,'k',"23-500");
    Citizen c5("Iwona","Klej",27,'k',"22-500");

    City c("Lublin :)");
    c.addCitizen(c1);
    c.addCitizen(c2);
    c.addCitizen(c3);
    c.addCitizen(c4);
    c.addCitizen(c5);


    c.show_city();
    cout << "---------- Citiziens ----------------" << endl;
    c.show_citizens();
    cout << "-------------------------------------" << endl;
    cout << "Ilosc mieszkancow: " << c.city_citizens() << endl;
    cout << "Kobiet: " << c.women() << endl;
    cout << "Pelnoletni: " << c.adults() << endl;
    cout << "--- Postal codes ---" << endl;
    c.postal_codes();
    cout << "-------------------------------------" << endl;
    c.deleteCitizen("Bahonko",22);
    cout << "-------------------------------------" << endl;
    c.show_citizens();
    c.deleteCitizen("Klej",17);
    cout << "-------------------------------------" << endl;
    c.show_citizens();
    */
    //TEST FUNKCJI
    /*
    vector<City> cities;
    cities.push_back(City("Lublin"));
    cities.push_back(City("Warszawa"));
    cities.push_back(City("Gdansk"));
    cities.push_back(City("Wroclaw"));
    cities.push_back(City("Krakow"));

    cities.at(0).addCitizen(Citizen("Adam","Bahonko",22,'m',"21-500"));
    cities.at(0).addCitizen(Citizen("Tomek","Bahonko",13,'m',"23-500"));
    cities.at(0).addCitizen(Citizen("Jola","Bahonko",12,'k',"222-500"));

    cities.at(1).addCitizen(Citizen("Adam","Kowalski",77,'m',"21-500"));
    cities.at(1).addCitizen(Citizen("Tomek","Kowalski",33,'m',"23-500"));
    cities.at(1).addCitizen(Citizen("Ola","Kowalska",12,'k',"23-500"));


    cities.at(2).addCitizen(Citizen("Tomek","Wisniewski",31,'m',"21-500"));
    cities.at(2).addCitizen(Citizen("Ola","Wisniewski",42,'k',"21-500"));


    cities.at(3).addCitizen(Citizen("Sylwia","Borowik",64,'k',"21-550"));


    cities.at(4).addCitizen(Citizen("Adam","Nowak",2,'m',"11-500"));
    cities.at(4).addCitizen(Citizen("Tomek","Nowak",88,'m',"11-100"));
    cities.at(4).addCitizen(Citizen("Agata","Nowak",13,'k',"11-530"));
    cities.at(4).addCitizen(Citizen("Karolina","Nowak",46,'k',"21-505"));
    cities.at(4).addCitizen(Citizen("Genowefa","Nowak",52,'k',"21-550"));



    cout << "Przed sortowaniem" << endl;
    showCities(cities);
    sort_cities(cities);
    cout << "Po sortowaniu" << endl;
    showCities(cities);
    cout << "******************8" << endl;
    statatistic(cities);
    the_most(cities,1);
    the_most(cities,2);
    */
    //ZADANIE 4
    /*
    vector<int> vec;
    vec.push_back(222);
    vec.push_back(551);
    vec.push_back(111);
    vec.push_back(99);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(141442);
    vec.push_back(5);
    vec.push_back(999);

    cout << "Przed sortowaniem - wedlug sumy cyfr" << endl;
    for_each(vec.begin(),vec.end(),print);
    cout << endl;

    sort(vec.begin(),vec.end(),Func_sum());
    cout << "Po sortowaniu - wedlug sumy cyfr" << endl;
    for_each(vec.begin(),vec.end(),print);
    cout << endl;
    cout << "------------------------------------------" << endl;


    cout << "Przed sortowaniem - wedlug liczby cyfr" << endl;
    for_each(vec.begin(),vec.end(),print);
    cout << endl;

    sort(vec.begin(),vec.end(),Funct_length());
    cout << "Po sortowaniu - wedlug liczby cyfr" << endl;
    for_each(vec.begin(),vec.end(),print);
    cout << endl;
    */
    return 0;
}

void showCities(vector<City> c)
{
    cout << "List cities: " << endl;
    for(int i=0;i<c.size();i++)
        c.at(i).show_city();
    cout << "---------------" << endl;
}

void the_most(vector<City> c, int mode)
{
    if(mode == 1) mode_1(c);
    if(mode == 2) mode_2(c);

}

void sort_cities(vector <City> &c)
{
    for(int i=0;i<c.size();i++)
    {
        for(int j=i;j<c.size();j++)
        {
            if( c.at(i).getCitiziens().size() < c.at(j).getCitiziens().size() )
            {
                //City temp = c.at(i);
                //c.erase(c.begin()+i);
                //c.insert(c.begin()+i,c.at(j));

                iter_swap(c.begin() + i, c.begin() + j);

                //c.erase(c.begin()+j);
                //c.insert(c.begin()+j,temp);
            }
        }
    }


}


void statatistic(vector <City> c)
{
    cout << "-------- Statistic -------------" << endl;
    for(int i=0;i<c.size();i++)
    {
         vector<Citizen> t = c.at(i).getCitiziens();
        int k=0,m=0,a=0,y=0;
        for(int j=0;j<t.size();j++)
        {
            if(t.at(j).getSex() == 'k') k++;
            else m++;

            if(t.at(j).getAge() > 17) a++;
            else y++;
        }

        cout << "-----------------------------" << endl;
        c.at(i).show_city();
        cout << "Liczba mieszkancow: " << t.size() << endl;
        cout << "Liczba kobiet: " << k << endl;
        cout << "Liczba menszyzn: " << m << endl;
        cout << "Liczba doroslnych: " << a << endl;
        cout << "Liczba dzieci: " << y << endl;
        cout << "-----------------------------" << endl;

    }


}

void mode_1(vector<City> c)
{
    int max_code = -1;
    int number_city = -1;

    for(int i=0;i<c.size();i++)
    {
        vector<Postal_temp> temp;
        vector<Citizen> t = c.at(i).getCitiziens();

         for(int j=0; j<t.size(); j++)
         {
             string code = t.at(j).getPostal_Code();

             bool add = false;
             for(int k=0;k<temp.size();k++)
             {
                if(temp.at(k).getCode() == code)
                {
                    add = true;
                    break;
                }
             }

            if(add == false)
                 temp.push_back(code);
         }

          // to bezposrednio nie dziala ... temp.size() > max_code
          int xd = temp.size();
          if(xd > max_code)
          {
              max_code = temp.size();
              number_city = i;
          }
    }

    cout << "Najwiecej roznych kodow: " << c.at(number_city).getName() << " -> " << max_code << endl;

}

void mode_2(vector<City> c)
{
    int number_citizinies = -1;
    int number_city = -1;

    int xd = c.size();
    if(xd > 0)
    {
        number_citizinies = c.at(0).getCitiziens().size();
        number_city = 0;
    }


    for(int i=0;i<c.size();i++)
    {
        vector<Citizen> t = c.at(i).getCitiziens();
        xd = t.size();
        if(xd < number_citizinies)
        {
            number_citizinies = xd;
            number_city = i;
        }

    }

    cout << "Najmniej mieszkancow: " << c.at(number_city).getName() << " -> " <<number_citizinies << endl;

}







#include "City.h"

City::City(string city_name1)
{
    city_name=city_name1;
}

City::~City()
{
    //dtor
}

 void City::addCitizen(Citizen c){citizens.push_back(c);}

 void City::deleteCitizen(string surname, int wiek)
 {
     for(int i=0;i<citizens.size();i++)
     {

        if(citizens.at(i).getSurename() == surname)
        {
            if(citizens.at(i).getAge() == wiek)
            {
                citizens.erase(citizens.begin()+i);
                cout << "Delated: " << surname << " " << wiek << endl;
                break;
            }
        }
     }
 }

 void City::show_citizens()
 {
     for(int i =0;i<citizens.size();i++)
        citizens.at(i).show();
 }

 void City::show_city(){cout << "City name: " << city_name << endl;}

 int City::women()
 {
     int count = 0 ;
     for(int i=0;i<citizens.size();i++)
     {
         if(citizens.at(i).getSex() == 'k')
            count++;
     }


     return count;
 }

int City::city_citizens(){return citizens.size();}

int City::adults()
{
     int count = 0 ;
     for(int i=0;i<citizens.size();i++)
     {
         if(citizens.at(i).getAge() >= 18)
            count++;
     }


     return count;
}

vector<Citizen> City::getCitiziens()
{
    return citizens;
}

string City::getName(){return city_name;}


void City::postal_codes()
{

    vector<Postal_temp> temp;

     for(int i=0;i<citizens.size();i++)
     {
         string code = citizens.at(i).getPostal_Code();
         bool add = false;
         for(int j=0;j<temp.size();j++)
         {
            if(temp.at(j).getCode() == code)
            {
                add = true;
                temp.at(j).addCount();
                break;
            }
         }

        if(add == false)
             temp.push_back(code);
     }

    for(int j=0;j<temp.size();j++)
        temp.at(j).show();

} // stworzyc klase ktora bedzie tworzona w tej funkcji.


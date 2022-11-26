#ifndef CITY_H
#define CITY_H

#include <vector>
#include "Citizen.h"
#include "Postal_temp.h"

using namespace std;

class City
{
    private:
       vector<Citizen> citizens;
       string city_name;

    public:
        City(string city_name1);
        virtual ~City();

        string getName();
        vector<Citizen> getCitiziens();
        void addCitizen(Citizen c);
        void deleteCitizen(string surname, int wiek);
        void show_citizens();
        void show_city();
        int women();
        int city_citizens();
        int adults();
        void postal_codes(); // stworzyc klase ktora bedzie tworzona w tej funkcji.







};

#endif // CITY_H

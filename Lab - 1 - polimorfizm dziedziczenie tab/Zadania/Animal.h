#ifndef ANIMAL_H
#define ANIMAL_H
 #include <iostream>
 using namespace std;

class Animal
{
     private:
         int limbNr;
         string name;
         bool protectedAnimal;


    public:
        Animal();
        Animal(int limbNr1, string name1, bool protectedAnimal1 = true);
        virtual ~Animal();

         string getName();
         int getLimbNr();
         bool getProteectedAnimal();

         void setName(string name1);
         void setLimbNr(int limbNr1);
         void setProtectedAnimal(bool protectedAnimal1);

         void giveVoice();
         void info();
         void animalInit(int limbNr1, string name1, bool protectedAnimal1);

    protected:


};

#endif // ANIMAL_H

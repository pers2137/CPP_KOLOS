#include "Animal.h"9

Animal::Animal()
{
    //ctor
}

Animal::~Animal()
{
    //dtor
}

Animal::Animal(int limbNr1, string name1, bool protectedAnimal1)
:limbNr(limbNr1), name(name1), protectedAnimal(protectedAnimal1){};
/*
{
 limbNr = limbNr1;
 name = name1;
 protectedAnimal = protectedAnimal1;
}
*/
string Animal::getName(){return name;}
int Animal::getLimbNr(){return limbNr;}
bool Animal::getProteectedAnimal(){return protectedAnimal;}

void Animal::setName(string name1) {name = name1;}
void Animal::setLimbNr(int limbNr1){limbNr = limbNr1;}
void Animal::setProtectedAnimal(bool protectedAnimal1) {protectedAnimal = protectedAnimal1;}

void Animal::giveVoice(){cout << "Chrum, miau,hau,piiiii" << endl;}
void Animal::info() { cout << "[ name: " << name << " | limb number: "<< limbNr << " | protected: " << protectedAnimal << " ]"<<endl; }
void Animal::animalInit(int limbNr1, string name1, bool protectedAnimal1)
{
    limbNr=limbNr1;
    name=name1;
    protectedAnimal=protectedAnimal1;
}

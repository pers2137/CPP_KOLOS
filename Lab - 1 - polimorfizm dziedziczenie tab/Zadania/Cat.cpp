#include "Cat.h"

Cat::Cat()
{
    //ctor
}

Cat::~Cat()
{
    //dtor
}

Cat::Cat(int limbNr1, string name1, bool protectedAnimal1)
:Animal::Animal(limbNr1,name1,protectedAnimal1){};


void Cat::setLevelOfMouseHunting(int value)
{
    if(value < 1 || value > 10) cout << "Niepoprawna wartosc ! <1-10>" << endl;
    else
    {
        levelOfMouseHunting = value;
    }
}

int Cat::getLevelOfMouseHunting(){return levelOfMouseHunting;}

int Cat::getMice(int index)
{
     if(index < 0 || index > 4)
      {
            cout << "Niepoprawna wartosc ! <0-4>" << endl;
            return -1;
      }

      return mice[index];

}

void Cat::giveVoice()
{
    cout << "Miau miau" << endl;
}
void Cat::info()
{
     Animal::info();
     cout << "[ level Guide Skill: "<< getLevelOfMouseHunting() << " | Hunting last 5 years: ["
     << mice[0] << "|"
     << mice[1] << "|"
     << mice[2] << "|"
     << mice[3] << "|"
     << mice[4]
     << "] ]"<<endl;
}

void Cat::initMice(int r1,int r2, int r3,int r4,int r5)
{
    mice[0] = r1;
    mice[1] = r2;
    mice[2] = r3;
    mice[3] = r4;
    mice[4] = r5;
}

void Cat::initCat(int limbNr1, string name1, bool protectedAnimal1, int lvl, int mice1[5])
{
    Animal::animalInit(limbNr1,name1,protectedAnimal1);
    levelOfMouseHunting = lvl;
    mice[0]=mice1[0];
    mice[1]=mice1[1];
    mice[2]=mice1[2];
    mice[3]=mice1[3];
    mice[4]=mice1[4];


}


#include "Dog.h"



Dog::Dog()
{
    //ctor
}

Dog::~Dog()
{
    //dtor
}


Dog::Dog();
Dog::Dog(int limbNr1, string name1, bool protectedAnimal1)
:Animal::Animal(limbNr1,name1,protectedAnimal1){};

Dog::Dog(int limbNr1, string name1, bool protectedAnimal1, string breed1, int lGu, int lTr)
:Animal::Animal(limbNr1,name1,protectedAnimal1)
{
    breed=breed1;
    levelOfGuideSkills=lGu;
    levelOfTrackerSkills=lTr;
}

void Dog::setSkillLevel(int type, int value)
{
    if(value < 1 || value > 10) cout << "Niepoprawna wartosc ! <1-10>" << endl;
    else
    {
        if(type == 0) levelOfGuideSkills = value;
        if(type == 1) levelOfTrackerSkills = value;
    }

}

int Dog::getSkillLevel(int type)
{
    if(levelOfGuideSkills < 1 || levelOfGuideSkills > 10) return 0;
    if(levelOfTrackerSkills < 1 || levelOfTrackerSkills > 10) return 0;

    if(type == 0) return levelOfGuideSkills;
    if(type == 1) return levelOfTrackerSkills;

    return -1;
}

void Dog::giveVoice()
{
    cout << "Hau, hau" << endl;
}

void Dog::info()
{
    Animal::info();
    cout << "[ breed: " << breed << " | level Guide Skill: "<< getSkillLevel(0) << " | level Tracer Skill: " << getSkillLevel(1) << " ]"<<endl;

}


#ifndef DOG_H
#define DOG_H
#include "Animal.h"


class Dog: public Animal
{
    private:
            string breed;
            int levelOfGuideSkills; // <1-10>
            int levelOfTrackerSkills;  //<1-10>


    public:
        Dog();
        Dog(int limbNr1, string name1, bool protectedAnimal1 = true);
        Dog(int limbNr1, string name1, bool protectedAnimal1, string breed1, int lGu, int lTr);
        virtual ~Dog();

        void setSkillLevel(int type, int value);
        int getSkillLevel(int type);
        void giveVoice();
        void info();



};

#endif // DOG_H

#ifndef CAT_H
#define CAT_H
#include "Animal.h"

class Cat: public Animal
{

    private:
         int levelOfMouseHunting;
         int  mice[5];

    public:
        Cat();
        Cat(int limbNr1, string name1, bool protectedAnimal1 = true);
        virtual ~Cat();
        void setLevelOfMouseHunting(int value);
        int getLevelOfMouseHunting();
        int getMice(int index);
        void giveVoice();
        void info();

        void initMice(int r1,int r2, int r3,int r4,int r5);
        void initCat(int limbNr1, string name1, bool protectedAnimal1, int lvl, int mice1[5]);
};

#endif // CAT_H

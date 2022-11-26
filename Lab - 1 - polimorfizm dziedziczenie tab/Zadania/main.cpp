#include <iostream>
#include <time.h>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "cstdlib"
using namespace std;

int howManyProtectedAnimals(Animal** table, int size);
int howManyTrackerDog(Dog* dog[], int size);
void howManyCats(Cat* cat[], int size);

int main()
{
  /*
    Animal a = Animal(4,"Dog");
    Animal a2 = Animal(4,"Dog",false);

    Dog d = Dog(4,"Cggg",0,"York",2,2);
    Dog d2 = Dog(4,"Dog");
    //cout << a.getName << endl;
    cout << a.getName() << endl;
    cout << a.getProteectedAnimal() << endl;
    cout << a2.getProteectedAnimal() << endl;

    a.info();
    a2.info();
    d.setSkillLevel(1,110);
    d.setSkillLevel(1,-1);
    cout << endl;
    d.info();
    cout << endl;
    d2.info();
    d2.giveVoice();

    Cat c = Cat(4,"Lotel",0);
    c.initMice(1,2,3,4,5);
    c.info();
*/
    srand (time(NULL));

    //Zliczanie zwierz¹t chronionych
    Animal** animal; //Dynamiczna tablica dynamicznych obiektów.
    animal = new Animal*[6];
    animal[0]=new Dog(4,"Burek",1,"York",4,2);
    animal[1]=new Cat(4,"Kot",0);
    animal[2]=new Dog(4,"Reksio",0,"Pitbull",6,6);
    animal[3]=new Cat(4,"Kot dwa",0);
    animal[4]=new Animal(2,"Ma³pa",1);
    animal[5]=new Dog(4,"Kundel",1,"Kundel",1,1);

    //zliczanie psów tropicieli
    Dog* dog[4]; //Statyczna tablica dynamicznych obiektów.
    dog[0] = new Dog(4,"Burek",1,"York",4,2);
    dog[1] = new Dog(4,"Reksio",0,"Pitbull",6,6);
    dog[2] = new Dog(4,"Kundel",1,"Kundel",1,2);
    dog[3] = new Dog(4,"Kundel v2",1,"Kundel",4,9);

    //zliczanie upolowanych myszy.
    Cat* cat[4]; //Statyczna tablica dynamicznych obiektów.
    cat[0]=new Cat(4,"Kot jeden",0);
    cat[1]=new Cat(4,"Kot dwa",0);
    cat[2]=new Cat(4,"Kot trzy",0);
    cat[3]=new Cat(4,"Kot cztery",0);

    for(int i=0;i<4;i++)
    {
        cat[i]->initMice(rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100);
    }

    cout << "Number of protected Animal: " << howManyProtectedAnimals(animal,6) << endl;
    cout << "Number of Tracker dog: " << howManyTrackerDog(dog,4) << endl;
    cout << "Count of hunted mouse for all cats: " << endl;
    howManyCats(cat,4);
    cout << endl;


    return 0;
}

int howManyProtectedAnimals(Animal** table, int size)
{
    int ile = 0;
    for(int i=0;i<size;i++)
    {
        if(table[i]->getProteectedAnimal()) ile++;
    }
    return ile;
}

int howManyTrackerDog(Dog* dog[], int size)
{
    int ile = 0;
    for(int i=0;i<size;i++)
    {
        if(dog[i]->getSkillLevel(0) < dog[i]->getSkillLevel(1)) ile++;

    }
    return ile;

}

void howManyCats(Cat* cat[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout << "Name: " << cat[i]->getName() << " | hunted: ";
        int ile = 0;
        for(int j=0;j<5;j++) ile = ile + cat[i]->getMice(j);

        cout << ile << " mouses in 5 years." << endl;


    }
}

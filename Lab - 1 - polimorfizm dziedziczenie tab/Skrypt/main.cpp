#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;
int main()
{
/*
cout<<endl<<"Obiekty klasy Person"<<endl;
Person o1("Grazyna","Nowak",45);
o1.showInfoPerson();
cout<<"Czy pelnoletnia?: "<<o1.is_18()<<endl;
o1.setAge(16);
cout<<endl<<"Obiekty klasy Teacher"<<endl;
Teacher n1("Barbara","Kowalska",56,30,"Phd");
n1.showInfoTeacher();
cout<<"Czy ma Phd?: "<<n1.is_Phd()<<endl;
n1.setAge(34);

Person p1[3];
Person* p2;
Person* p3[3];
Person** p4;
for(int i=0; i<3; i++)
{
 p1[i].init("Anna","Nowak",20+i);
 p1[i].showInfoPerson();
}
 p2=new Person[3];
for(int i=0; i<3; i++)
{
 p2[i].init("Ola","Adamek",20+i);
 p2[i].showInfoPerson();
}
for(int i=0; i<3; i++)
{
 p3[i]=new Person("Kasia","Kowalska",20+i);
 p3[i]->showInfoPerson();
}
 p4=new Person*[3];
for(int i=0; i<3; i++)
{
 p4[i]=new Person("Pawel","Wojcik",20+i);
 p4[i]->showInfoPerson();
}
for(int i=0;i<3;i++){
 delete p3[i];
}
for(int i=0;i<3;i++){
 delete p4[i];
}
 delete [] p4;
*/
Student p1[3]; //statyczn� tablic� statycznych obiekt�w klasy Student,
Student* p2; //dynamiczn� tablic� statycznych obiekt�w klasy Student,
Student* p3[3]; //statyczn� tablic� dynamicznych obiekt�w klasy Student,
Student** p4; //dynamiczn� tablic� dynamicznych obiekt�w klasy Student

for(int i=0; i<3; i++)
{
 p1[i].init("Anna","Nowak",20+i,std::to_string(12340 + i));
 p1[i].showInfoPerson();
}
 p2=new Student[3];
for(int i=0; i<3; i++)
{
 p2[i].init("Ola","Adamek",20+i,std::to_string(12340 + i));
 p2[i].showInfoStudent();
}
for(int i=0; i<3; i++)
{
 p3[i]=new Student("Kasia","Kowalska",20+i, std::to_string(12340 + i));
 p3[i]->showInfoStudent();
}
 p4=new Student*[3];
for(int i=0; i<3; i++)
{
 p4[i]=new Student("Pawel","Wojcik",20+i,std::to_string(12340 + i));
 p4[i]->showInfoStudent();
}
for(int i=0;i<3;i++){
 delete p3[i];
}
for(int i=0;i<3;i++){
 delete p4[i];
}
 delete [] p4;

return 0;
}

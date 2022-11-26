#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <map>


using namespace std;

void show( set <int> s);
void show( set <string> s);


pair<set<int>,int> zad_1(vector<int>);

template<typename T>
void zad_2(set<T> t1, set<T> t2);
void zad_3(string s1, string s2);


int main()
{
    //ZAD 1
    /*
    vector<int> v1{ 1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 10 };
    cout << "Vector: ";
    for (int x : v1)
        cout << x << " ";
    cout << endl;

    pair<set<int>,int> s = zad_1(v1);

    cout << "Set:    ";
    show(s.first);

    cout << "Potwozona liczba: " << s.second << endl;
    */

    //ZAD 2
    //DLA INT
    /*
     set<int> v1{ 2, 4, 6, 8, 10, 12, 14, 16, 22 };
     set<int> v2{ 2, 5, 6, 9, 11, 12, 14, 16, 23 };
     cout << "Vector 1: ";
     show(v1);
     cout << "Vector 2: ";
     show(v2);
     zad_2(v1,v2);
    */
     //DLA STRING
     /*
     set<string> v1{ "a" , "b" , "c" , "ada" , "cpp" , "'woda gazowana'" };
     set<string> v2{ "a" , "d" , "e" , "ola" , "cpp" , "'woda nie gazowana'" };
     cout << "Vector 1: ";
     show(v1);
     cout << "Vector 2: ";
     show(v2);
     zad_2(v1,v2);
     */
     //ZAD 3
     //zak³adam ¿e drugi wyraz jest tym d³u¿szym
     zad_3("adam","adamm");
     zad_3("adam","adamX");


    return 0;
}


pair<set<int>,int> zad_1(vector<int> v)
{
    int number;
    set<int> s;

    for (int x : v)
    {
        if(s.count(x) == 0)
            s.insert(x);
        else
            number = x;
    }

    return pair<set<int>,int>{s,number};
}

template<typename T>
void zad_2(set<T> t1, set<T> t2)
{
    set<T>sDiffer;


     set_difference(t1.begin(),t1.end(),t2.begin(),t2.end(),
                insert_iterator<set<T>>(sDiffer,sDiffer.begin()));

     cout << "Roznica vector 1 do vector 2 :";
     show(sDiffer);
     sDiffer.clear();

     set_difference(t2.begin(),t2.end(),t1.begin(),t1.end(),
                insert_iterator<set<T>>(sDiffer,sDiffer.begin()));

     cout << "Roznica vector 2 do vector 1 :";
     show(sDiffer);

}

void zad_3(string s1, string s2)
{
    map<char,int> m1;
    map<char,int> m2;
    map<char, int>::iterator it;

        //TWORZENIE MAP WARTOSCI
        for(int i=0; i<s2.length(); i++)
        {
            if(m1.count( s2[i] ) )
            {
                m1[ s2[i] ]=  m1[ s2[i] ] + 1;
            }
            else
            {
                m1.insert(make_pair(s2[i],1));
            }
        }

        for(int i=0; i<s1.length(); i++)
        {
            if(m2.count( s1[i] ) )
            {
                m2[ s1[i] ]=  m2[ s1[i] ] + 1;
            }
            else
            {
                m2.insert(make_pair(s1[i],1));
            }
        }

//Wyœwietlenie wartosci map.
/*
         for(it=m1.begin(); it!=m1.end(); ++it)
        {
            cout << it->first <<" "<<it->second<<endl;
        }
        cout << "--------" << endl;
         for(it=m2.begin(); it!=m2.end(); ++it)
        {
            cout << it->first <<" "<<it->second<<endl;
        }
*/
        //PORÓWNYWANIE MAPÓW
        for(it=m1.begin(); it!=m1.end(); ++it)
        {
            if(m2.count( it->first ) )
            {
                if(it->second !=  m2[ it->first ])
                {
                    cout << "Poszukiwana litera to: " << it->first << endl;
                    break;
                }
            }
            else
            {
                cout << "Poszukiwana litera to: " << it->first << endl;
                break;
            }
        }
}


void show( set <int> s)
{
     set<int>::iterator itr;
     for (itr = s.begin(); itr != s.end(); itr++)
     {
        cout << *itr<<" ";
     }

    cout<<endl;
}

void show( set <string> s)
{
     set<string>::iterator itr;

     for (itr = s.begin(); itr != s.end(); itr++)
     {
        cout << *itr<<" ";
     }

    cout<<endl;
}

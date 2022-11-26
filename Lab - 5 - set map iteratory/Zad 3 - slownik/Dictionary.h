#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <iostream>
#include <map>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

class Dictionary
{
    private:
        map<string,string> words;

    public:
        Dictionary();
        virtual ~Dictionary();
        void add(string s1, string s2);
        void drop(string s1);
        void show_dictionary();
        void show_translation(string s1);
        void show_z_a();

};

#endif // DICTIONARY_H

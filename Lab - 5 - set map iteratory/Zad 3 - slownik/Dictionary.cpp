#include "Dictionary.h"

Dictionary::Dictionary()
{
    cout << " Created new dictionary." << endl << endl;
}

Dictionary::~Dictionary(){}

void Dictionary::show_dictionary()
{
    map<string, string>::iterator it;
    cout << "---------- Dictionary ----------" << endl;

    for(it=words.begin(); it!=words.end(); ++it)
    {
        cout << setw(20) <<  std::left << it->first <<" "<<it->second<<endl;
    }
    cout << "------------- END --------------" << endl;

}

void Dictionary::add(string s1, string s2)
{
    if(words.count(s1))
        cout << "This word exist." << endl << endl;
    else
        words.insert(make_pair(s1,s2));
}

void Dictionary::drop(string s1)
{
    if(words.count(s1))
    {
        words.erase(s1);
        cout << "Removal complete." << endl << endl;
    }
    else
        cout << "This word not exist." << endl << endl;


}

void Dictionary::show_translation(string s1)
{
        if(words.count(s1))
        {
            cout << s1  << " - "<< words[s1] <<endl;
        }
        else
            cout << "This word not exist." << endl;

}

void Dictionary::show_z_a()
{
    vector<string> tmp;
    //vector<string> tmp_2;
    map<string, string>::iterator it;
    string s;
    for(it=words.begin(); it!=words.end(); ++it)
    {

       s= it->second;
       s+=";";
       s+= it->first;
       tmp.push_back(s);

    }

     sort(tmp.rbegin(), tmp.rend());
    string delimiter = ";";

     cout << "---------- Dictionary ----------" << endl;
     for (int i=0;i<tmp.size();i++)
     {
        string x = tmp.at(i);
        string token = x.substr(0, x.find(delimiter));
        string token_2 = x.substr(x.find(delimiter) +1 ,x.size() );

        cout << setw(20) <<  std::left << token <<" "<<token_2<<endl;

     }

    cout << "------------- END --------------" << endl;

}

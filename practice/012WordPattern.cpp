/*
Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between
a letter in pattern and a non-empty word in s.


Example 1:
Input: pattern = "abba", s = "dog cat cat dog"
Output: true

Example 2:
Input: pattern = "abba", s = "dog cat cat fish"
Output: false

Example 3:
Input: pattern = "aaaa", s = "dog cat cat dog"
Output: false

*/
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    map<char, string> mymap;
    string pattern, str, temp = "", w = "";
    int size, flag = 1, si = 0, ei;
    cout<<"enter the pattern :  ";
    getline(cin, pattern);
    cout<<"enter the string : ";
    getline(cin, str);
    
    for(int i = 0; i < pattern.length(); i++)
    {
        ei = str.find(' ', si);
        if (ei == -1)
            ei = str.length();
        w = str.substr(si, ei - si);
        if(mymap[pattern[i]] == "")
            mymap[pattern[i]] = w;
        si = ei + 1;
    }
    map<char, string>::iterator itr;
    for(itr = mymap.begin(); itr != mymap.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    for(int i = 0; i < pattern.length(); i++)
    {
        temp = temp + mymap[pattern[i]] + " ";
    }
    temp.erase(temp.length() - 1, 1);

    if(str == temp)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
   

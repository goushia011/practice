/*
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be
replaced to get t.

All occurrences of a character must be replaced with another character
while preserving the order of characters. No two characters may map to
the same character, but a character may map to itself.


Example 1:
Input: s = "egg", t = "add"
Output: true

Example 2:
Input: s = "foo", t = "bar"
Output: false

Example 3:
Input: s = "paper", t = "title"
Output: true

*/

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    map<char, char> mymap;
    map<char, char>::iterator itr;
    string s, t;
    int flag = 1;

    cout<<"enter s: ";
    getline(cin, s);
    cout<<"enter t: ";
    getline(cin, t);

    if(s.length() == t.length())
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(mymap[t[i]] == '\0')
            {
                mymap[t[i]] = s[i];
            }
            else
            {
                if(mymap[t[i]] != s[i])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    else{
        flag = 0;
    }
         
    for(itr = mymap.begin(); itr != mymap.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    
    if(flag == 0)
    {
        cout<<"not isomorphic";
    }
    else{
        cout<<"isomorphic";
    }
}

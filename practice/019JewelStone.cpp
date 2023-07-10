/*
You're given strings jewels representing the types of stones that are
jewels, and stones representing the stones you have. Each character in
stones is a type of stone you have. You want to know how many of the
stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of
stone from "A".


Example 1:

Input: jewels = "aA", stones = "aAAbbbb"
Output: 3


Example 2:

Input: jewels = "z", stones = "ZZ"
Output: 0

*/
#include<iostream>

using namespace std;

int main()
{
    string s, t;
    int count = 0;

    cout<<"enter s: ";
    getline(cin, s);
    cout<<"enter t: ";
    getline(cin, t);

    for(int i = 0; i < s.length(); i++)
    {
        for(int j = 0; j < t.length(); j++)
        {
            if(s[i] == t[j])
            {
                count++;
            }
        }
    }
    cout<<count;
 }

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

using namespace std;

int main()
{
    string str;
    int size, flag = 1;

    cout<<"enter 1st string ";
    getline(cin, str);
    cout<<endl;

    size = str.length();

    for(int i = 0; i < size / 2; i++)
    {
         if(str[i] != str[(size - 1) - i])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        cout<<"true";
    }
    else
    cout<<"false";
    }
   

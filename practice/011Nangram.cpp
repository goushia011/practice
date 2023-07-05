/*
Given two strings s and t, return true if t is an anagram of s, and
false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a
different word or phrase, typically using all the original letters
exactly once.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false
*/
#include<iostream>

using namespace std;

int main()
{
    string str1, str2;
    int size1, size2, flag = 1;

    cout<<"enter 1st string : ";
    getline(cin, str1);
    cout<<endl;
    cout<<"enter 2nd string : ";
    getline(cin, str2);
    size1 = str1.length();
    size2 = str2.length();
     
     for(int i = 0; i < size1; i++)
     {
        int index = str2.find(str1[i]);
        if(index == -1)
        {
            flag = 0;
            break;
        } 
        else 
        {
            str2[index] = '_';
        }
     }
     if(flag == 1)
     {
        cout<<"anagram";
     }
     else
     {
        cout<<"not an anagram";
     }
}
/*
Given two strings s and goal, return true if and only if s can become
goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the
rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.


Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true


Example 2:

Input: s = "abcde", goal = "abced"
Output: false

*/
#include<iostream>

using namespace std;

int main()
{
    char temp;
    string s, goal;
    int size , flag = 0;

    cout<<"enter s: ";
    getline(cin, s);
     cout<<"enter goal: ";
    getline(cin, goal);
    size = s.length();

    for(int j = 0; j < size; j++)
    {
        temp = s[0];
        for(int i = 1; i < s.length(); i++)
        {
           s[i - 1] = s[i];
        }
        s[size - 1] = temp;
        if(s == goal)
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout<<"true";
    }
    else
        cout<<"false";
}

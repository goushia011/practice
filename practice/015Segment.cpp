/*
Given a string s, return the number of segments in the string.

A segment is defined to be a contiguous sequence of non-space
characters.


Example 1:
Input: s = "Hello, my name is John"
Output: 5
Explanation: The five segments are ["Hello,", "my", "name", "is", "John"]

Example 2:
Input: s = "Hello"
Output: 1

*/
#include<iostream>

using namespace std;

int main()
{
    string s;
    int count = 1;

    cout<<"enter string ";
    getline(cin, s);

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
            count++;
        }
    }
  cout<<count;
}

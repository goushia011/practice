/*
Given a string s, find the first non-repeating character in it and
return its index. If it does not exist, return -1.


Example 1:
Input: s = "leetcode"
Output: 0

Example 2:
Input: s = "loveleetcode"
Output: 2

Example 3:
Input: s = "aabb"
Output: -1

*/
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    string s;
    map<char, int> mymap;

    cout<<"enter string: ";
    getline(cin, s);

    for(int i = 0; i < s.length(); i++)
        mymap[s[i]] += 1;

    int i, j, in = -1;
    for(i = 0; i < s.length(); i++)
    {
        for(j = 0; j < s.length(); j++)
        {
            if(i == j)
                continue;

            if(s[i] == s[j])
            {
                break;
            }
        }
        if(j == s.length())
        {
            in = i;
            break;
        }
    }

    if(in == -1)
    {
        cout<<"no unique character";
    }
    else
        cout<<in<<" "<<s[in];

}

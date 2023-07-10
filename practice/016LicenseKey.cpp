/*
You are given a license key represented as a string s that consists of
only alphanumeric characters and dashes. The string is separated into
n + 1 groups by n dashes. You are also given an integer k.

We want to reformat the string s such that each group contains exactly
k characters, except for the first group, which could be shorter than k
but still must contain at least one character. Furthermore, there must
be a dash inserted between two groups, and you should convert all
lowercase letters to uppercase.

Return the reformatted license key.


Example 1:
Input: s = "5F3Z-2e-9-w", k = 4
Output: "5F3Z-2E9W"
Explanation: The string s has been split into two parts, each part has
4 characters.
Note that the two extra dashes are not needed and can be removed.

Example 2:
Input: s = "2-5g-3-J", k = 2
Output: "2-5G-3J"
Explanation: The string s has been split into three parts, each part
has 2 characters except the first part as it could be shorter as
mentioned above.

*/
#include<iostream>
#include<string>

using namespace std;

string toUpper(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if((int)str[i] >= 97 && (int)str[i] <= 123)
        {
            str[i] = (int)str[i] - 32;
        }
    }
    return str;
}

 int main()
 {
    string s, upper, key="";
    int k, i, j, temp = 0;

    cout<<"enter string: ";
    getline(cin, s);
    cout<<"enter k: ";
    cin>>k;
    upper = toUpper(s);
    int size = upper.length();

    for(int i = 0; i < size; i++)
    {
        if(upper[i] == '-')
        {
            upper.erase(i, 1);
        }
    }

    for(int i = upper.length() - 1, h = 1; i >= 0; i--, h++)
    {
        key = upper[i] + key;
        if(h % k == 0 && i != 0)
            key = "-" + key;
    }
    cout<<key;
 }


/*
Convert a string to integer if it is possible

Example
Input: s = "234"
output: 234

Example
Input: s = "34t"
Output: Error
*/
#include<iostream>

using namespace std;

int strintTointeger(char s)
{
    switch(s)
    {
        case '1':
            return 1;
            break;
        case '2':
            return 2;
            break;
        case '3':
            return 3;
            break;
        case '4':
            return 4;
            break;
        case '5':
            return 5;
            break;
        case '6':
            return 6;
            break;
        case '7':
            return 7;
            break;
        case '8':
            return 8;
            break;
        case '9':
            return 9;
            break;
        case '0':
            return 0;
            break;
            
    }

}

int main()
{
    string s, n;
    int  divider = 0;
    float result = 0;

    cout<<"enter string: ";
    cin>>s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '.')
        {
            divider = 1;
            continue;
        }
       result = ((result * 10) + strintTointeger(s[i]));
       divider = divider * 10;
    }
    if(divider != 0)
    {
        result = result / divider;
    }
    cout<<result;
}

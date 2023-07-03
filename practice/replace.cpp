/*Program to replace spaces with hyphens in a string and print
the result in near if not perfect square column-wise*/
#include<iostream>

using namespace std;

int main()
{
    string str;

    cout<<"Enter the string\n";
    getline(cin , str);
    int size = str.length();

    for(int i = 0; i < size; i++)
    {
        if(str[i] == ' ')
        {
            str[i] = '_';
        }
    }
    cout<<str;
}
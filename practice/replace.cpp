/*Program to replace spaces with hyphens in a string and print
the result in near if not perfect square column-wise*/
#include<iostream>

using namespace std;

int main()
{
    string str, a[20][20];
    int row = 4, column = 4, pos = 0;

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

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j <  column; j++)
        {
                a[j][i] = str[pos++];
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
             cout<<a[j][i];
        }
        cout<<endl;
    }
}
#include<iostream>

using namespace std;

string toLower(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if((int)str[i] >= 65 && (int)str[i] <= 91)
        {
            str[i] = (int)str[i] + 32;
        }
    }
    return str;
}

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

int find(string str, char term)
{
    int size, i, index;
    size = str.length();

    for(i = 0; i < size; i++)
    {
        if(str[i] == term)
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{
    string str, low, upper;
    int size, index;
    char term;
    size = str.length();

    cout<<"enter string: ";
    getline(cin, str);
    low = toLower(str);
    cout<<low<<" ";
    upper = toUpper(str);
    cout<<upper<<endl;
    cout<<"enter the string to be find: ";
    cin>>term;
    index = find(str, term);
    cout<<index;
}
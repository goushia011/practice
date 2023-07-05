#include<iostream>
#include<string>

using namespace std;

int main()
{    
    string str;
    int flag = 1;

    cout<<"Enter any string : ";
    getline(cin, str);

    int size = str.length();

    for(int i = 0; i < size / 2; i++)
    {
        cout<<str[i]<<"=="<<str[(size - 1) - i]<<endl;
        if(str[i] != str[(size - 1) - i])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        cout<<"pallindrone";
    }
    else
    {
        cout<<"not";
    }
}

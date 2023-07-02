#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str;

    cout<<"Enter any string : ";
    getline(cin, str);

    int size =str.length();

    for(int i = 0; i < size - 1; i += 2)
    {
        int temp;
        temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
        cout<<str<<" ";
    }
    cout<<str;
}   
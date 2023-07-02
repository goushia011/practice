#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str;

    cout<<"Enter any string : ";
    getline(cin, str);

    int size =str.length();

    for(int i = 0; i < size / 2; i++)
    {
        int temp;
        temp = str[i];
        str[i] = str[(size - 1) -i];
        str[(size - 1) -i] = temp;
        cout<<str<<" ";
    }
    cout<<endl<<str;
}

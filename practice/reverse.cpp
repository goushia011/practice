#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str;
    cout<<"Enter any string\t";
    cin>>str;
    int n=str.length();
    for(int i=n-1;i>=0;i--){
        cout<<str[i];
    }
}
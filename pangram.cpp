#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main(){
    string str;
    int flag = 1, f;

    cout<<"Enter any string : ";
    getline(cin, str);
   
    for(char i = 'a'; i <= 'z'; i++)
    {
      if(str.find(i) == -1)
      {
         flag = 0;
         break;
      }
    }
    if(flag == 1)
    {
      cout<<"pangram sentence";
    }
    else
    cout<<"not a pangram sentence";
}
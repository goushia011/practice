/*
Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number

for example
 * A  -> 1
 * B  -> 2
 * C  -> 3
 * .....
 * .....
 * Z  -> 26
 * AA -> 27
 * AB -> 28
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int pow(int base, int exp)
{
    if (exp == 0)
        return 1;
    
    while (--exp > 0)
        base *= base;

    return base;
}

int main()
{
    char x[10];
    int y, result = 0, length = 0;

    cout<<"Enter: ";
    scanf("%s", x);

    for(int i = 0; x[i] != '\0'; ++i)
        length++;
    length--;

    for(int i = 0; i <= length; ++i) 
    {
        y = ((pow(26, (length - i))) * (x[i] - 64));
        result += y;
        cout<<y<<endl<<endl;
    }

    cout<<result;
}
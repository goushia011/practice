/*
convert roman no. to integer
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M
 * I : 1
 * V : 5
 * X : 10
 * L : 50
 * C : 100
 * D : 500
 * M : 1000

*/
#include<iostream>
#include<stdio.h>

using namespace std;

int romanToDecimal(char roman)
{
    int decimal;
    switch(roman)
     {
        case 'I':
        case 'i':
            decimal = 1;
            break;
        case 'V':
        case 'v':
            decimal = 5;
            break;
        case 'X':
        case 'x':
            decimal = 10;
            break;
        case 'L':
        case 'l':
            decimal = 50;
            break;
        case 'C':
        case 'c':
            decimal = 100;
            break;
        case 'D':
        case 'd':
            decimal = 500;
            break;  
        case 'M':
        case 'm':
            decimal = 1000;
            break;
        default:
            decimal = 0;
     }

     return decimal;
}

int main()
{
    char roman[100];
    int decimal[100], size, result = 0;

    cout<<"enter : ";
    scanf("%s", roman);

    for(size = 0; roman[size] != '\0'; size++);

    for(int i = 0; i < size; i++)
    {
        decimal[i] = romanToDecimal(roman[i]);
    }

    for(int i = 0; i < size - 1; i++)
    {
        if(decimal[i] < decimal[i + 1])
        {
            decimal[i + 1] -= decimal[i];
            decimal[i] = 0;
        }
    }

    for(int i = 0; i < size; i++)
    {
        result += decimal[i];
    }

    cout<<result;

}
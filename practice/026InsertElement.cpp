/*
Insert a given element in a sorted array such that it remain sorted

Example
Input: size = 5, array = [1, 3, 5, 7, 9], element = 4
output: [1, 3, 4, 5, 7, 9]
*/
#include<iostream>

using namespace std;

int main()
{
    int a[20], size, element, temp, i1, j;

    cout<<"enter size: ";
    cin>>size;

    cout<<"enter array: ";
    for(int i = 0; i < size; i++)
    {
        cin>>a[i];
    }

    cout<<"enter element: ";
    cin>>element;

    for(int i = 0; i < size; i++)
    {
        if(a[i] > element)
        {
            i1 = i;
            break;
        }
    }
    for(j = size; j > i1; j--)
    {
        a[j] = a[j - 1];
    }
    a[j] = element;
    size++;
        
    for(int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
}

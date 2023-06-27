/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits. 

example
Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
*/
#include<iostream>

using namespace std;

int main()
{
    int n, sum = 0, product = 1, Result;

    cout<<"Enter any integer : \n";
    cin>>n;

    while(n>0)
    {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n = n / 10;
    }
    
    cout<<"sum of all digits is: "<<sum;
    cout<<endl;
    cout<<"product of all digits is: "<<product<<endl;
    Result=product-sum;
    cout<<"Difference between sum and product is "<<Result;
}
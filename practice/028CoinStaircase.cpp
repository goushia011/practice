/*
You have n coins and you want to build a staircase with these coins.
The staircase consists of k rows where the ith row has exactly i coins.
The last row of the staircase may be incomplete.

Given the integer n, return the number of complete rows of the
staircase you will build.


Example 1:

Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.
*
**
**

Example 2:

Input: n = 8
Output: 3
Explanation: Because the 4th row is incomplete, we return 3.
*
**
***
**

*/
#include<iostream>

using namespace std;

int main()
{
    int coin, temp = 0,j = 0, i;

    cout<<"enter no. of coins: ";
    cin>>coin;

    for(i = 0; i <= j; i++)
    {
        for(j = 0; j <= i; j++)
        {
            cout<<"* ";
            coin--;
            if(j == i)
            {
                temp++;
            }
            if(coin == 0)
            {
                break;
            }
        }
        cout<<endl;
    }
        cout<<temp;
}
    

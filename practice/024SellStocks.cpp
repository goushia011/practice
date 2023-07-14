/*
You are given an array prices where prices[i] is the price of a given
stock on the ith day.

You want to maximize your profit by choosing a single day to buy one
stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you
cannot achieve any profit, return 0.


Example 1:
c
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6),
profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because
you must buy before you sell.


Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the
max profit = 0.

*/
#include<iostream>

using namespace std;

int main()
{
    int a[20], buy = -1, sell = -1, profit = 0, size, k, i;

    cout<<"enter size: ";
    cin>>size;
    cout<<"enter array: ";
    for(int i = 0; i < size; i++)
    {
        cin>>a[i];
    }

    for(i =  0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            k = a[j] - a[i];
            if(profit < k)
            {
                profit = k;
                buy = i;
                sell = j;
            }
        }
    }
    cout<<"buy on day "<<buy + 1<< " at price "<<a[buy]<<endl;
    cout<<"sell on day "<<sell + 1<< " at price "<<a[sell]<<endl;
    cout<<"profit is "<<profit;
    
}

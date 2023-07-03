/*
Given a m x n binary matrix mat, find the 0-indexed position of the row
that contains the maximum count of ones, and the number of ones in that
row.

In case there are multiple rows that have the maximum count of ones, 
the row with the smallest row number should be selected.

Return an array containing the index of the row, and the number of
ones in it.

Example
Input: mat = [[0,1],[1,0]]
Output: [0,1]
Explanation: Both rows have the same number of 1's. So we return the
index of the smaller row, 0, and the maximum count of ones (1). So,
the answer is [0,1].
*/
#include<iostream>

using namespace std;

int main()
{
    int a[20][20], count, n=3, m=3, max1 = 0, maxi=0;
    cout<<"enter array\n";
    for(int  i = 0; i< n; i++)
    {
        for( int j = 0; j < m; j++)
        {
           cin>>a[i][j]; 
        }
    }
    for(int i = 0; i < n; i++)
    {
        count = 0;
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == 1)
            {
                count++;
            }
        }
        if(count > max1)
        {
            max1 = count;
            maxi = i;
        }
    }

    cout<<maxi<<" "<<max1;
}
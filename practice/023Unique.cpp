/*
Given an integer array nums sorted in non-decreasing order, remove the
duplicates in-place such that each unique element appears only once.
The relative order of the elements should be kept the same. Then return
the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get 
accepted, you need to do the following things:
 * Change the array nums such that the first k elements of nums contain
    the unique elements in the order they were present in nums
    initially. The remaining elements of nums are not important as well
    as the size of nums.
 * Return k.

Example
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five
elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are
underscores).

*/
#include<iostream>

using namespace std;

int main()
{
   int a[20], k = 0, size, i, j, temp;

   cout<<"enter size: ";
   cin>>size;

   cout<<"enter array is: ";
   for(int i = 0; i < size ; i++)
   {
      cin>>a[i];
   }

   cout<<"array is : ";
   for(i = 1; i < size; i++)
   {
      for(j = 0; j < i ; j++)
      {
         if(a[i] == a[j])
         {
            temp = a[i];
            for(int k = i; k < size - 1; k++)
            {
               a[k] = a[k + 1];
            }
            a[size - 1] = temp;
            size--;
         }
      }
   }
   for(int j = 0; j < size; j++)
   {
      cout<<a[j]<<" ";
   }
}
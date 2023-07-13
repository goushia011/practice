/*
Given an integer array nums and an integer val, remove all occurrences
of val in nums in-place. The order of the elements may be changed. Then
return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be
k, to get accepted, you need to do the following things:
 * Change the array nums such that the first k elements of nums contain
    the elements which are not equal to val. The remaining elements of
    nums are not important as well as the size of nums.
 * Return k.

Example
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five
elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they
are underscores).

*/
#include<iostream>

using namespace std;

int main()
{
   int a[20], val, size, temp;

   cout<<"enter size: ";
   cin>>size;

   cout<<"enter arrray: ";
   for(int i = 0; i < size; i++)
   {
      cin>>a[i];
   }

   cout<<"enter val: ";
   cin>>val;
   cout<<endl;

   cout<<"array is: ";
   for(int i = 0; i < size; i++)
   {
      if(a[i] == val)
      {
         temp = a[i];
         for(int j =i ; j < size - 1; j++)
         {
            a[j] = a[j + 1];
         }
         a[size - 1] = temp;
         size--;
      } 
   }
   for(int i = 0; i < size; i++)
   {
      cout<<a[i]<<" ";
   }
}


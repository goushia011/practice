/*
You are given a string s representing an attendance record for a
student where each character signifies whether the student was absent,
late, or present on that day. The record only contains the following
three characters:

 * 'A': Absent.
 * 'L': Late.
 * 'P': Present.

The student is eligible for an attendance award if they meet both of
the following criteria:

 * The student was absent ('A') for strictly fewer than 2 days total.
 * The student was never late ('L') for 3 or more consecutive days.

Return true if the student is eligible for an attendance award, or
false otherwise.


Example 1:

Input: s = "PPALLP"
Output: true
Explanation: The student has fewer than 2 absences and was never late 3 or more consecutive days.


Example 2:

Input: s = "PPALLL"
Output: false
Explanation: The student was late 3 consecutive days in the last 3 days, so is not eligible for the award.

*/
#include<iostream>

using namespace std;

int main()
{
    string s;
    int p = 0, a = 0, l = 0, ls = 0, mls = 0;

    cout<<"enter attendence: ";
    getline(cin, s);

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'A')
        {
            a++;
            ls = 0;
        }
        else if (s[i] == 'P')
        {
            p++;
            ls = 0;
        }
        else if (s[i] == 'L')
        {
            l++;
            ls++;
            if(ls > mls)
                mls = ls;
        }
    }

    cout<<p<<" "<<l<<" "<<a<<" "<<mls<<endl;
    if(a >= 2 || mls >= 3)
    {
        cout<<"Not able for award";
    }
    else
        cout<<"Able for award";
}

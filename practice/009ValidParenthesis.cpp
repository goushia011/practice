/*
Given a string s containing just the characters '(', ')', '{', '}',
'[' and ']', determine if the input string is valid.

An input string is valid if:
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 *  Every close bracket has a corresponding open bracket of the same type.

Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

*/
#include<iostream>
#include<stack>

using namespace std;

int valid(string str)
 {
    stack<char> s;
    char popped;
    int flag = 1;
    for(int i = 0; (i < str.length()) && (flag == 1); i++)
    {
        switch(str[i]) {
            case '(':
            case '[':
            case '{':
                s.push(str[i]);
                break;
            case ')':
                if (s.empty())
                {
                    flag = 0;
                    break;
                }
                popped = s.top();
                s.pop();
            
                if (popped != '(')
                    flag = 0;
                break;
            case ']':
            if (s.empty())
                {
                    flag = 0;
                    break;
                }
                popped = s.top();
                s.pop();
                if (popped != '[')
                    flag = 0;
                break;
            case '}':
                if (s.empty())
                {
                    flag = 0;
                    break;
                }
                popped = s.top();
                s.pop();
                if (popped != '{')
                    flag = 0;
                break;
        }
    }

    if (flag == 1 && s.empty()) {
        return 1;
    } else {
        return 0;
    }

};

int main()
{
    string str;
    int size;

    cout<<"enter string: ";
    getline(cin, str);

    size = str.length();

    if(valid(str)) 
        cout<<"valid parenthesis"<<endl;
    else
        cout<<"not valid";
}

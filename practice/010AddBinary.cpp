/*
Given two binary strings a and b, return their sum as a binary string.

Example 1:
Input: a = "11", b = "1"
Output: "100"

Example 2:
Input: a = "1010", b = "1011"
Output: "10101"

*/
#include<iostream>
#include<string>

using namespace std;

char xorGate(char op1, char op2) {
    if((op1 == '0' && op2 == '0') || (op1 == '1' && op2 == '1')) {
        return '0';
    } else {
        return '1';
    }
}

char orGate(char op1, char op2) {
    if(op1 == '0' && op2 == '0') {
        return '0';
    } else {
        return '1';
    }
}

char andGate(char op1, char op2) {
    if(op1 == '1' && op2 == '1') {
        return '1';
    } else {
        return '0';
    }
}

void adder(char op1, char op2, char carry, char &result, char &carryOut)
{
    char xor1, and1, xor2, and2;
    xor1 = xorGate(op1, op2);
    and1 = andGate(op1, op2);
    result = xorGate(xor1, carry);
    and2 = andGate(xor1, carry);
    carryOut = orGate(and1, and2);

}

void addTraillingZero(string &str1, string &str2)
{
    str1 = "0" + str1;
    while(str2.length() < str1.length())
    {
        str2 = "0" + str2;
    }
}

void addZero(string &str1, string &str2)
{
    if(str1.length() > str2.length())
        addTraillingZero(str1, str2);
    else 
        addTraillingZero(str2, str1);
}


int main()
{
    string str1, str2, result = "           ";
    char carry = '0';
    int size, size1;

    cout<<"enter 1st string: ";
    getline(cin, str1);

    cout<<"enter 2nd string: ";
    getline(cin, str2);

    addZero(str1, str2);
    size = str1.length();

    for(int i = (size - 1); i >= 0; i--)
    {
        adder(str1[i], str2[i], carry, result[i], carry);
    }

    cout<<result;    
}
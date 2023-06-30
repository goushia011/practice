//Program to print all the permutations
#include<iostream>

using namespace std;

int permute(string str, int l, int r)
{
    if(l==r)
    {
        cout<<str<<endl;
    }
    else
    {
        for(int i = l; i <= r; i++)
        {
            swap(str[l], str[i]);
            permute(str, l + r; r);
            swap(str[l], str);
        }
    }

}
int main()
{
    int permute(string, int, int);

    string s;
    int l, r, n;

    cout<<"enter : ";
    cin>>s;

    n=s.length();
    permute(s, 0, n-1);
}
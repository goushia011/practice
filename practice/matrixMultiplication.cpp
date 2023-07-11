#include<iostream>

using namespace std;

int main()
{
    int m1[20][20], m2[20][20], result[20][20] = {0} ;
    int r1, c1, r2, c2;

    cout<<"enter r1 and c1: ";
    cin>>r1>>c1;

    cout<<"enter r2 and c2: ";
    cin>>r2>>c2;

    cout<<"enter 1st matrix: ";
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<endl;
    cout<<"enter 2nd matrix: ";
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cin>>m2[i][j];
        }
    }
    cout<<endl;
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }

    if(c1 == r2)
    {
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                for(int k = 0; k < r2; k++)
                {
                    result[i][j] = result[i][j] + (m1[i][k] * m2[k][j]);
                }
            }
        }
    }

    cout<<"multiplication of result are\n";
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

}
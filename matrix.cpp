#include <iostream>

using namespace std;

int cavity(int a[20][20], int row, int col)
{
    int cavity;
    for (int i = 1; i < row - 1; i++)
    {
        for (int j = 1; j < col - 1; j++)
        {
            if (a[i][j - 1] > a[i][j] && a[i][j + 1] > a[i][j] && a[i - 1][j] > a[i][j] && a[i + 1][j] > a[i][j])
            {
                cout<<i<<", "<<j<<"\n";
            }
        }
    }
}

int main()
{
    int a[20][20], row, col;
    cout << "enter row and col";
    cin >> row;
    cin >> col;

    cout << "enter array: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    cavity(a, row, col);
}
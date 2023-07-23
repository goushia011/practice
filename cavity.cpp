#include <iostream>

using namespace std;

int stringToInteger(char s)
{
    switch (s)
    {
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    case '0':
        return 0;
    }

    return 0;
}

int parseInt(string str)
{
    int result = 0;
    for (int i = 0; i < str.length(); i++)
    {
        result = ((result * 10) + stringToInteger(str[i]));
    }

    return result;
}

int main()
{
    string str;
    int row, col, array[20][20], pos, start, end;

    cout << "Enter array as string: ";
    getline(cin, str);

    row = col = pos = start = 0;
    while (pos <= str.length())
    {
        if (str[pos] == ',')
        {
            array[row][col] = parseInt(str.substr(start, pos - start));
            row++;
            col = 0;
            start++;
        }
        else if (str[pos] == '_' || pos == str.length())
        {
            array[row][col] = parseInt(str.substr(start, pos - start));
            col++;
            start = pos + 1;
        }

        pos++;
    }
    row++;

    for(int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
        
    }

}
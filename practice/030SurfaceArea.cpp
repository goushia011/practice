/*
You are given an n x n grid where you have placed some 1 x 1 x 1 cubes.
Each value v = grid[i][j] represents a tower of v cubes placed on top
of cell (i, j).

After placing these cubes, you have decided to glue any directly
adjacent cubes to each other, forming several irregular 3D shapes.

Return the total surface area of the resulting shapes.

Note: The bottom face of each shape counts toward its surface area.

Example 1
+-----+-----+
|  1  |  2  |
+-----+-----+
|  3  |  4  |
+-----+-----+
Input: grid = [[1,2],[3,4]]
Output: 34

Example 2
+-----+-----+-----+
|  1  |  1  |  1  |
+-----+-----+-----+
|  1  |  0  |  1  |
+-----+-----+-----+
|  1  |  1  |  1  |
+-----+-----+-----+
Input: grid = [[1,1,1],[1,0,1],[1,1,1]]
Output: 32

example 3

+-----+-----+-----+
|  2  |  2  |  2  |
+-----+-----+-----+
|  2  |  1  |  2  |
+-----+-----+-----+
|  2  |  2  |  2  |
+-----+-----+-----+
Input: grid = [[2,2,2],[2,1,2],[2,2,2]]
Output: 46
*/
#include <iostream>

using namespace std;

int layerArea(int grid[20][20], int row, int col)
{
    int area = 0, lateralArea;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(grid[i][j] > 0)
            {
            lateralArea = 4;
            if (j > 0)
            {
                if (grid[i][j - 1] > 0)
                {
                    lateralArea--;
                }
            }
            if (j < col - 1)
            {
                if (grid[i][j + 1] > 0)
                {
                    lateralArea--;
                }
            }
            if (i > 0)
            {
                if (grid[i - 1][j] > 0)
                {
                    lateralArea--;
                }
            }
            if (i < row - 1)
            {
                if (grid[i + 1][j] > 0)
                {
                    lateralArea--;
                }
            }
            }
            else{
                lateralArea = 0;
            }
            cout << lateralArea << " ";
            area += lateralArea;
        }
        cout << endl;
    }

    return area;
}

int decrementGrid(int grid[20][20], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j] > 0)
                grid[i][j]--;
            sum += grid[i][j];
        }
    }
    return sum;
}

int main()
{
    int grid[20][20], row, col, area = 0, lateralArea;

    cout << "enter row: ";
    cin >> row;
    cout << "enter col: ";
    cin >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j] > 0)
                area += 2;
        }
    }
    do
    {
        int la = layerArea(grid, row, col);
        cout<<"la: "<<la<<" ";
        area += layerArea(grid, row, col);
    } while (decrementGrid(grid, row, col));

    cout << area;
}

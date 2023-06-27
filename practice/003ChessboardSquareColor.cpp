/*
You are given coordinates, a string that represents the coordinates of a square of the chessboard. Below is a chessboard for your reference.
        
      +---+---+---+---+---+---+---+---+
    8 |   |###|   |###|   |###|   |###|
      +---+---+---+---+---+---+---+---+
    7 |###|   |###|   |###|   |###|   |
      +---+---+---+---+---+---+---+---+
    6 |   |###|   |###|   |###|   |###|
      +---+---+---+---+---+---+---+---+
    5 |###|   |###|   |###|   |###|   |
      +---+---+---+---+---+---+---+---+
    4 |   |###|   |###|   |###|   |###|
      +---+---+---+---+---+---+---+---+
    3 |###|   |###|   |###|   |###|   |
      +---+---+---+---+---+---+---+---+
    2 |   |###|   |###|   |###|   |###|
      +---+---+---+---+---+---+---+---+
    1  |###|   |###|   |###|   |###|   |
      +---+---+---+---+---+---+---+---+
        a   b   c   d   e   f   g   h

Return true if the square is white, and false if the square is black.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
  char add[2];
  int sum;

  cout<<"Enter : ";
  scanf("%s", add);

  sum = (int)add[0] + (int)add[1];
  if(sum % 2 == 0){
    cout<<"black";
  }
  else
    cout<<"white";
}
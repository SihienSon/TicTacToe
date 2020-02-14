#include <iostream>
#include "TicTacToe.h"
using namespace std;



void TicTacToe::CreateBoard()
{
  for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
          Array[i][j] = '_';
        }
    }
}

void TicTacToe::DisplayBoard(){
  for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
          cout << Array[i][j] << " ";
        }
      cout << endl;
    }
}

void TicTacToe::GetPlayerChoice(int row, int col){
  cout << "You picked : " << row << "," << col << endl;
}


void TicTacToe::PlaceMarker(int row, int col, char marker){
  Array[row-1][col-1] = marker;
}

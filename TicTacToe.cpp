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
<<<<<<< HEAD
  for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
          cout << Array[i][j] << " ";
        }
      cout << endl;
=======
  for (int i = 0; i < 3; ++i) {
       for (int k = 0; k < 3; k++){
          cout << Array[i][j] << ' ';
        }
       cout <<   endl;
>>>>>>> 1e299ab3ff49562d8c30667c06242bd7ba038c4d
    }
}

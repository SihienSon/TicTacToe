#include <iostream>
#include "TicTacToe.h"
using namespace std;


int main() {

  TicTacToe Game;
  Game.CreateBoard();
  Game.DisplayBoard();
  cout << "Enter a row" << endl;
  int row;
  cin >> row;
  cout << "Enter a column" << endl;
  int col;
  cin >> col;
  cout << "Enter your marker" << endl;
  char marker;
  cin >> marker;
  Game.GetPlayerChoice(row, col);


  Game.PlaceMarker(row, col, marker);
  Game.DisplayBoard();




}

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


  Game.PlaceMarker(1, 1, 'X');
  Game.DisplayBoard();
  Game.PlaceMarker(1, 2, 'O');
  Game.DisplayBoard();
  Game.PlaceMarker(3, 2, 'x');
  Game.DisplayBoard();


}

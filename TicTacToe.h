using namespace std;

class TicTacToe{
  public:
    void CreateBoard();
    void DisplayBoard();
    void GetPlayerChoice(int row, int col);
    void PlaceMarker(int row, int col, char marker);
    char Array[3][3];
  private:

};

#include <iostream>
using namespace std;


class Pieces {
public:
    char piece;
    int value;

    int pawnMove(){

    };

};


Pieces whitePawn;
Pieces whiteBishop;
Pieces whiteKnight;
Pieces whiteRook;
Pieces whiteQueen;
Pieces whiteKing;


Pieces blackPawn;
Pieces blackBishop;
Pieces blackKnight;
Pieces blackRook;
Pieces blackQueen;
Pieces blackKing;

class Board {
public:
    const static int rows = 8;
    const static int cols = 8;
    pair<char, int> grid[rows][cols]{};


public: Board()= default;


    int printBoard() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                grid[1][j].first = blackPawn.piece;
                grid[6][j].first = whitePawn.piece;

                grid[0][0].first= blackRook.piece;
                grid[0][7].first = blackRook.piece;

                grid[7][0].first= whiteRook.piece;
                grid[7][7].first= whiteRook.piece;

                grid[0][3].first = blackKing.piece;
                grid[7][3].first = whiteKing.piece;

                grid[0][4].first = blackQueen.piece;
                grid[7][4].first = whiteQueen.piece;

                grid[0][1].first = blackKnight.piece;
                grid[0][6].first = blackKnight.piece;

                grid[7][1].first = whiteKnight.piece;
                grid[7][6].first = whiteKnight.piece;

                grid[0][2].first = blackBishop.piece;
                grid[0][5].first = blackBishop.piece;

                grid[7][2].first = whiteBishop.piece;
                grid[7][5].first = whiteBishop.piece;

                cout << grid[i][j].first;

                if (j < cols - 1)
                    cout << " |      ";
            }
            cout << endl;
            if (i < rows - 1)
                cout << "----------------------------------------------------------------" << endl;
        }
        return grid[rows - 1][cols - 1].second;
    }


};


int main(){
    whitePawn.value = 1;
    whitePawn.piece = 'P';

    blackPawn.value = 1;
    blackPawn.piece = 'p';

    whiteBishop.value = 3;
    whiteBishop.piece = 'B';

    blackBishop.value = 3;
    blackBishop.piece = 'b';

    whiteKnight.value = 3;
    whiteKnight.piece = 'H';

    blackKnight.value = 3;
    blackKnight.piece = 'h';

    whiteRook.value = 5;
    whiteRook.piece = 'R';

    blackRook.value = 5;
    blackRook.piece = 'r';

    whiteQueen.value = 9;
    whiteQueen.piece = 'Q';

    blackQueen.value = 9;
    blackQueen.piece = 'q';

    whiteKing.value = 0;
    whiteKing.piece = 'K';

    blackKing.value = 0;
    blackKing.piece = 'k';


    Board board;
    board.printBoard();
    return 0;
}
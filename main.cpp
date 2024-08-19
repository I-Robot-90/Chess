#include <iostream>
using namespace std;



class Pieces {
public:
    char piece;
    int value;

};
Pieces pawn;
Pieces bishop;
Pieces knight;
Pieces rook;
Pieces queen;
Pieces king;

class Board {
public:
    const static int rows = 8;
    const static int cols = 8;
    pair<char, int> grid[rows][cols]{};
//    char piece = (new Pieces())->piece;


public: Board()= default;

    int printBoard() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                grid[1][j].first = pawn.piece;
                grid[6][j].first = pawn.piece;

                grid[0][0].first= rook.piece;
                grid[0][7].first = rook.piece;
                grid[7][0].first= rook.piece;
                grid[7][7].first= rook.piece;

                grid[0][3].first = king.piece;
                grid[7][3].first = king.piece;

                grid[0][4].first = queen.piece;
                grid[7][4].first = queen.piece;

                grid[0][1].first = knight.piece;
                grid[0][6].first = knight.piece;
                grid[7][1].first = knight.piece;
                grid[7][6].first = knight.piece;

                grid[0][2].first = bishop.piece;
                grid[0][5].first = bishop.piece;
                grid[7][2].first = bishop.piece;
                grid[7][5].first = bishop.piece;

                cout << grid[i][j].first;

                if (j < cols - 1)
                    cout << " |     ";
            }
            cout << endl;
            if (i < rows - 1)
                cout << "-------------------------------------------------------" << endl;
        }
        return grid[rows - 1][cols - 1].second;
    }


};


int main() {
    pawn.value = 1;
    pawn.piece = 'p';

    bishop.value = 1;
    bishop.piece = 'B';

    knight.value = 1;
    knight.piece = 'H';

    rook.value = 1;
    rook.piece = 'R';

    queen.value = 1;
    queen.piece = 'Q';

    king.value = 0;
    king.piece = 'K';
    Board board;
    board.printBoard();
    return 0;
}

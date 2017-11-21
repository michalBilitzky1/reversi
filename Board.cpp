/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/

#include "Board.h"



Board::Board() {
    player_o = 'o';
    player_x = 'x';
    row = 8;
    col = 8;
    this->board = new char *[9];
    for (int i = 0; i <= row; i++) {
        this->board[i] = new char[9];
    }

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            board[i][j] = ' ';
        }
    }

    board[4][5]=player_x;
    board[5][4]=player_x;
    board[4][4]=player_o;
    board[5][5]=player_o;

}

Board::~Board() {
    for (int i = 0; i <= row; i++) {
        delete[] board[i];
    }
    delete[](board);

}





void Board :: printBoard() {
    cout << " | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |" << endl;
    cout << "----------------------------------" << endl;
    for (int i=1; i<=row; i++) {
        cout << i <<"| ";
        for(int j=1;j<=col;j++) {
            cout << board[i][j]<< " | " ;
        }
        cout<<endl;
        cout <<"----------------------------------" << endl;
    }
}




char** Board::get_board() {
    return board;
}

int Board::get_row() {
    return this->row;
}

int Board::get_col() {
    return this->col;
}






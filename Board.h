/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/

#ifndef EX2_BOARD_H
#define EX2_BOARD_H
#include <iostream>
#include <vector>
#include "Piece.h"

using namespace std;

class Piece;
class Board {
private:
    char player_o,player_x;
    char** board;
    int row,col;

public:

/**********************************
       * constructor
       *
       * input: none
       * output: none
**********************************/
    Board();
    ~Board();

/**********************************

       * print the board.
       *
       * input: none
       * output: none
**********************************/

    void printBoard();

/**********************************
 * return the number of rows.
 * input: none
 * output: row
 **********************************/

    int getRowBoard();

/**********************************
 * return the number of cols.
 * input: none
 * output: col
 **********************************/

    int getColBoard();
/**********************************
 * return the screen of the game.
 * input: none
 * output: board
**********************************/

    char** getBoard();


};

#endif //EX2_BOARD_H
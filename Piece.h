/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/
#ifndef EX2_PIECE_H
#define EX2_PIECE_H
#include <iostream>
#include "Board.h"

using namespace std;



class Piece {
private:
    int row,col;

public:
/**********************************
        * constructor
        *
        * input: none
        * output: none
**********************************/
    Piece(int row=8,int col=8);
/**********************************
 * @return row number
 *
 * input: none
 * output: row
  **********************************/
    int getRow();
/**********************************
 * @return col number.
 *
 *  input: none
 *  output: col
**********************************/
    int getCol();

};


#endif //EX2_PIECE_H
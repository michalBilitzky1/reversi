/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/

#include "Piece.h"

Piece::Piece(int row,int col) {
    this->row=row;
    this->col=col;

}

int Piece::getRow(){
    return this->row;
}

int Piece::getCol(){
    return this->col;
}



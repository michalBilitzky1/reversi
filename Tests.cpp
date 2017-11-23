//
// Created by michalbi on 23/11/17.
//

#include "Tests.h"
#include "Player.h"

Tests::Tests(Board &board):board(&board){

}

void Tests::test1(){
    Steps steps (*this->board);
        Player player(*this->board, steps);

}
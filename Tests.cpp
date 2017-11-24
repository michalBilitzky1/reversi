//
// Created by michalbi on 23/11/17.
//

#include "Tests.h"
#include "PlayerHuman.h"

Tests::Tests(Board &board):board(&board){

}

void Tests::test1(){
    Steps steps (*this->board);
        Player player(*this->board, steps);

}
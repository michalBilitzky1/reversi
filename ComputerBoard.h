//
// Created by miri on 22/11/17.
//

#ifndef EX2_COMPUTERBOARD_H
#define EX2_COMPUTERBOARD_H


#include "Board.h"
#include "Steps.h"
#include "Player.h"

class ComputerBoard {
private:
    Board* boardReal;
    Board* boardImaginative;
    Steps steps;
    Player player;
public:
    //constractor
    ComputerBoard(Board &boardReal,Board &boardImaginative, Player player, Steps steps);


    int checkMoveComputer(vector<Piece> vector);
    //int grade();
    int checkMoveHuman();
};


#endif //EX2_COMPUTERBOARD_H

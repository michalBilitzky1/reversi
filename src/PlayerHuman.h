#ifndef EX2_PLAYERHUMAN_H
#define EX2_PLAYERHUMAN_H

#include "Board.h"
#include "Steps.h"
#include "Player.h"


class PlayerHuman {
private:
    Board* board;
public:
    /**********************************
        * constructor
        *
        * input: board
        * output: none
    **********************************/
    PlayerHuman(Board &board);

    /************************************
     * play one turn of computer player.
     * @param player
     * @param player1
     * @param steps
     * @param flag
     * @return
     ************************************/
    int playOneTurn(char player,Player player1, Steps steps,int flag);

};





#endif //EX2_GAMELOGIC_H
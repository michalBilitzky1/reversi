/*************************
 * name: Michal Bilitzky,
 *       Miri Asher
 * id:205419849
 *    205891492
 *************************/
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



    void playHuman();

};






#endif //EX2_PLAYERHUMAN_H

/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/

#ifndef EX2_GAME_H
#define EX2_GAME_H
#include "Board.h"
#include "Steps.h"
#include "Player.h"

class Game {

private:
    Board* board;
public:

/**********************************
       * constructor
       *
       * input: none
       * output: none
**********************************/
    Game(Board &board);
    // ~Game();
/**********************************
 * run the game.
 * input: none
 * output: none
**********************************/

    void run();

};




#endif //EX2_GAME_H
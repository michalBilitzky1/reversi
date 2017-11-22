/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/

#ifndef EX2_GAME_H
#define EX2_GAME_H
#include "Board.h"
#include "Steps.h"
#include "Player.h"
#include "ComputerBoard.h"

class Game {

private:
    Board* boardReal;
    Board* boardImaginative;
public:

/**********************************
       * constructor
       *
       * input: none
       * output: none
**********************************/
    Game(Board &boardReal,Board &boardImaginative);
    // ~Game();
/**********************************
 * run the game.
 * input: none
 * output: none
**********************************/

    void run();

};




#endif //EX2_GAME_H
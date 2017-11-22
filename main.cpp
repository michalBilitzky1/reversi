/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/

#include <iostream>
#include "Board.h"
#include "Game.h"

using namespace std;

int main() {
    Board board;
    Board board2;
    Game game(board,board2);
    game.run();
}
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
    Game game(board);
    game.run();
}
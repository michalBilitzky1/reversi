/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/

#include <iostream>
#include "src/Board.h"
#include "src/Game.h"

using namespace std;

int main() {
    Board board;
   // Board board2;
    Game game(board);
    game.run();
}
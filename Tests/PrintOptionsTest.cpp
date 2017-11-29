/*************************
 * name: Michal Bilitzky,
 *       Miri Asher
 * id:205419849
 *    205891492
 *************************/

#include <gtest/gtest.h>
#include "../src/Board.h"
#include "../src/Game.h"

TEST(PrintOptionsTest, sadsa) {
// check if the options offered to the player are the right options.
    Board boardReal(8);
    Steps steps(boardReal);
    Player player(boardReal, steps);
    boardReal.initializeBoard();

    steps.optionsToLocate(player.getPlayerX());
    EXPECT_EQ(4,steps.getVec().at(1).getRow());
    EXPECT_EQ(3,steps.getVec().at(1).getCol());




}
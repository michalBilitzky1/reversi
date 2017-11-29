/*************************
 * name: Michal Bilitzky,
 *       Miri Asher
 * id:205419849
 *    205891492
 *************************/

#include <gtest/gtest.h>
#include "../src/Board.h"
#include "../src/Game.h"

TEST(CheckInputTest, sadsa) {
    // check if the user chose a legal move.
    Board board(8);
    Steps steps(board);
    Player player(board, steps);
    board.initializeBoard();
    steps.optionsToLocate(player.getPlayerX());
    Piece piece(4,3);
    Piece piece2(8,3);
    EXPECT_EQ(1, player.checkInput(piece,steps.getVec()));
    EXPECT_EQ(0, player.checkInput(piece2,steps.getVec()));
}
/*************************
 * name: Michal Bilitzky,
 *       Miri Asher
 * id:205419849
 *    205891492
 *************************/

#include <gtest/gtest.h>
#include "../src/Board.h"

TEST(test1, sadsa) {
    //check the number of cols according to the given size.
    Board board(8);
    board.getRowBoard();
    EXPECT_EQ(8, board.getRowBoard());
}


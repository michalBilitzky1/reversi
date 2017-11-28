/*************************
 * name: Michal Bilitzky,
 *       Miri Asher
 * id:205419849
 *    205891492
 *************************/

#include <gtest/gtest.h>
#include "../src/Board.h"

TEST(BoardSizeTest, sadsa) {
    Board board(6);
    EXPECT_EQ(6, board.getRowBoard());
}
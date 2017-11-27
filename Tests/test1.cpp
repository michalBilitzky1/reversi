//
// Created by michalbi on 27/11/17.
//

#include <gtest/gtest.h>
#include "../src/Board.h"

TEST(test1, sadsa) {
    Board board;
    board.getRowBoard();
    EXPECT_EQ(8, board.getRowBoard());
}

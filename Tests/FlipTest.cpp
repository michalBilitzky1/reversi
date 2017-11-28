//
// Created by michalbi on 28/11/17.
//

#include <gtest/gtest.h>
#include "../src/Board.h"
#include "../src/Game.h"

/*TEST(FlipTest, sadsa) {
    Board board(4);
    Steps steps(board);
    Player player(board, steps);
    board.initializeBoard();
    board.getBoard()[3][2]=o;
    board.getBoard()[2][2]=o;
    board.getBoard()[1][1]=x;

    board.initializeBoard();
    steps.optionsToLocate(player.getPlayerX());
    Piece piece(3,3);
    steps.flip(piece, player.getPlayerX());

    EXPECT_STREQ("x", &board.getBoard()[2][2]);

}*/
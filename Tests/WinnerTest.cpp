/*************************
 * name: Michal Bilitzky,
 *       Miri Asher
 * id:205419849
 *    205891492
 *************************/

#include <gtest/gtest.h>
#include "../src/Board.h"
#include "../src/Game.h"

TEST(Winner, sadsa) {
    Board board(6);
    Steps steps(board);
    Player player(board, steps);
    board.initializeBoard();
    board.getBoard()[3][4]=o;
    board.getBoard()[4][4]=o;
    board.getBoard()[2][3]=x;
    board.getBoard()[4][3]=x;
    board.initializeBoard();
    steps.optionsToLocate(player.getPlayerO());
    Piece piece(4,5);
    steps.flip(piece, player.getPlayerX());
    EXPECT_STREQ("x is the winner!", player.winner());

}
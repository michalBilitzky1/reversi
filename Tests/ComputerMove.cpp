/*************************
 * name: Michal Bilitzky,
 *       Miri Asher
 * id:205419849
 *    205891492
 *************************/
#include <gtest/gtest.h>
#include "../src/Board.h"
#include "../src/Game.h"

TEST(ComputerMove, sadsa) {
    Board board(8);
    Steps steps(board);
    Player player(board, steps);
    board.initializeBoard();
    board.getBoard()[4][4]=o;
    board.getBoard()[5][4]=o;
    board.getBoard()[4][5]=x;
    board.getBoard()[5][5]=x;
    board.getBoard()[5][6]=x;
    board.getBoard()[6][4]=x;
    board.getBoard()[7][3]=x;
    board.initializeBoard();
    steps.optionsToLocate(player.getPlayerO());
    EXPECT_EQ(6,steps.getVec().at(2).getRow());
    EXPECT_EQ(6,steps.getVec().at(2).getCol());
    PlayerComputer computer(board);
    Piece piece =computer.checkMoveComputer(steps.getVec());
    EXPECT_EQ(5, piece.getRow());
    EXPECT_EQ(7, piece.getCol());
}
//
// Created by michalbi on 08/12/17.
//

#include <gtest/gtest.h>
#include "../src/Board.h"
#include "../src/Client.h"
#include "../src/RemotePlayer.h"

TEST(ReadMove, sadsa){
    Board board(5);
    Client client("127.0.0.1", 8000, board);
    RemotePlayer player (&client,board);
     client.sendMove(1,5);
    EXPECT_EQ(1, player.readMove().getRow());
    EXPECT_EQ(2, player.readMove().getCol());



}
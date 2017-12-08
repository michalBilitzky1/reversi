//
// Created by michalbi on 08/12/17.
//

#include <gtest/gtest.h>
#include "../src/Board.h"
#include "../src/Client.h"

TEST(checkClientMove, sadsa){
    Board board(6);
    Client client("127.0.0.1", 8000, board);
    int x = client.clientMove(client).getRow();
    int y = client.clientMove(client).getCol();
    EXPECT_EQ(3, x);
    EXPECT_EQ(2, y);



}
//
// Created by michalbi on 09/11/17.
//

#ifndef EX2_PLAYER_H
#define EX2_PLAYER_H


#include "Board.h"
#include "Steps.h"

class Player {
private:
    char player_x;
    char player_o;
    Board *b;
    Steps s1;

public:
/**********************************
          * constructor
          *
          * input: none
          * output: none
**********************************/
    Player(Board &b, Steps s1);
    //  ~Player();
/**********************************
 * @param player
 *
 * input: none
 * output: print the Queue
 **********************************/
    void printWhoQueue(char player);
/**********************************
 * @return the piece that was chosen by the user.
 * input: a piece.
 * output: a piece
**********************************/
    Piece chosenMove();
/**********************************
 * @param vec
 *  @return true if the board isn't filled
 *  false if the board is full.
 *  input: none.
 *  output: true or false
 **********************************/
    bool checkHaveMove(vector<Piece> vec);
/**********************************
 * @return how many x are on the board.
 * input: none.
 *  output: the number of x.
 **********************************/
    int countX();
/**********************************
   * @return how many o are on the board.
   *
 * input: none.
 *  output: the number of o.
 **********************************/
    int countO();
/**********************************
 * count the number of x and o and prints
 * who is the winner.
 *
 * input: none.
 * output: winner
 **********************************/
    void winner();
/**********************************
 * @param piece
 *  @param vec
 *  @return true if the input is among the
 *  list of options anf false if it isn't.
 *
 * input: none.
 * output:true or false.
 */
    bool checkInput(Piece piece,vector<Piece> vec);


    char getPlayerO();
    char getPlayerX();
};


#endif //EX2_PLAYER_H
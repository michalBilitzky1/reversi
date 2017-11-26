/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/

#ifndef EX2_STEPS_H
#define EX2_STEPS_H


#include "GameLogic.h"


class Steps:public GameLogic {
private:
    Board* board;
    vector<Piece> vec;
    char player_o;
    char player_x;

    // vector<Piece> vec2;

public:
/**********************************
         * constructor
         *
         * input: none
         * output: none
**********************************/
    Steps(Board &board);
    virtual ~Steps(){ };
/**********************************
 * @param player
 * adding the options of location to
 * a vector.
 *
 * input:none.
 * output:none

**********************************/

    void optionsToLocate(char player);
/**********irtual void optionsToLocate(char player);
    virtual int printOpti************************
 * @return 1 if there are options
 * for location or 0 if not.
 *
 *  input:none.
 *  output: print the vector of options.
**********************************/
    int printOptions();
/**********************************
 * @param end
 * @param player
 * flips the opposite player according
 * to the piece given by the user.
 *
 *  input:none
 *  output:none
**********************************/
    void flip(Piece end, char player);
/**********************************
 * @param piece_to_add
 * adds a x to the board according to
 * the given piece
 *
 * input:none
 * output:none
**********************************/
    void addPiece(Piece piece_to_add, char player);
/**********************************
 * @return vector of pieces
 *
 * input:none
 * output:none
***********************************/

    vector<Piece> getVec();
/**********************************
 * clears the vector.
 *
 * input:none
 * output:none
***********************************/
    void clearVec();

    /* vector<Piece> getVec2();
     void clearVec2();*/


    void notFlip(Piece end, char player);
    void removePiece(Piece piece_to_remove);


};

#endif //EX2_STEPS_H
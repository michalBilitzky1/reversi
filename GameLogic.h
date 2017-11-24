/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/

#ifndef EX2_GAMELOGIC_H
#define EX2_GAMELOGIC_H


#include "Board.h"
#include "Piece.h"

class GameLogic{
public:
    virtual void optionsToLocate(char player)=0;
    virtual int printOptions()=0;
    virtual void flip(Piece end, char player)=0;
    virtual ~GameLogic(){ };
};
#endif //EX2_GAMELOGIC_H
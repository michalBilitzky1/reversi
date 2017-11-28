/*************************
 * name: Michal Bilitzky,
 *       Miri Asher
 * id:205419849
 *    205891492
 *************************/

#include <iostream>
#include "src/Board.h"
#include "src/Game.h"
#include "src/PlayerHuman.h"

using namespace std;

int main() {
    Board board(8);
    int choose;
    Game game(board);
    PlayerHuman playerHuman(board);
    cout<<"choose game:"<<endl;
    cout<<"1: two players (human against computer)"<<endl;
    cout<<"2: one player (human against human)"<<endl;
    cin>>choose;
    while(choose!=1 && choose!=2){
        cout<<"choose game:"<<endl;
        cout<<"1: two players (human against computer)"<<endl;
        cout<<"2: one player (human against human)"<<endl;
        cin>>choose;
    }
    switch (choose){
        case 1:
            game.run();
            break;

        case 2:
            playerHuman.playHuman();
            break;



    }

return 0;
}
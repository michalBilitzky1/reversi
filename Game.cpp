/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/
#include "Game.h"

Game::Game(Board &board):board(&board){

};


void Game::run() {
    Steps steps(*this->board);
    Player player(*this->board, steps);
    bool choice;
    Piece piece(0, 0);
    board->printBoard();
    while(player.checkHaveMove(steps.getVec())== true) {
        int flag=0;
        player.printWhoQueue(player.getPlayerX());
        steps.optionsToLocate(player.getPlayerX());
        int ans = steps.printOptions();
        if (ans == 1) {
            piece = player.chosenMove();
            choice= player.checkInput(piece,steps.getVec());
            while (!choice) {
                cout<<"Your choice is'n an options.Choose move from the list."<<endl;
                steps.printOptions();
                piece = player.chosenMove();
                choice=player.checkInput(piece,steps.getVec());
            }
            steps.pieceToFlip(piece, player.getPlayerX());
            board->printBoard();
            steps.clearVec();

        }
        else{
            cout<<"No possible moves."<<endl;
            flag++;
        }
        player.printWhoQueue(player.getPlayerO());
        steps.optionsToLocate(player.getPlayerO());
        int ans2 = steps.printOptions();
        if (ans2 == 1) {
            piece =player.chosenMove();
            choice= player.checkInput(piece,steps.getVec());
            while (!choice) {
                cout<<"Your choice is'n an options.Choose move from the list."<<endl;
                steps.printOptions();
                piece = player.chosenMove();
                choice= player.checkInput(piece,steps.getVec());

            }
            steps.pieceToFlip(piece, player.getPlayerO());
            board->printBoard();
            steps.clearVec();
        }
        else{
            cout<<"No possible moves."<<endl;
            flag++;
            if(flag==2) {
                player.winner();
                return ;
            }

        }
    }
    cout << "x your score is: " << player.countX() << endl;
    cout << "o your score is: " << player.countO() << endl;
    cout << endl;
    player.winner();

}


/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/
#include "Game.h"

Game::Game(Board &boardReal,Board &boardImaginative):boardReal(&boardReal),boardImaginative(&boardImaginative){

};


void Game::run() {
    Steps steps(*this->boardReal);
    // Steps steps1(*this->boardImaginative);
    Player player(*this->boardReal, steps);
    // Player player1(*this->boardImaginative,steps1);
    ComputerBoard compu(*this->boardReal,*this->boardImaginative,player,steps);
    bool choice;
    Piece piece(0, 0);
    boardReal->printBoard();
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
            steps.flip(piece, player.getPlayerX());
            boardReal->printBoard();
            //boardImaginative = boardReal;
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
            piece =steps.getVec().at(compu.checkMoveComputer(steps.getVec()));
            /*choice= player.checkInput(piece,steps.getVec());
            while (!choice) {
                cout<<"Your choice is'n an options.Choose move from the list."<<endl;
                steps.printOptions();
                piece = player.chosenMove();
                choice= player.checkInput(piece,steps.getVec());

            }*/
            steps.flip(piece, player.getPlayerO());
            boardReal->printBoard();
            cout<< player.getPlayerO()<<" played "<<"("<<piece.getRow()<<","<<piece.getCol()<<")"<<endl;
            cout<<endl;
            boardImaginative = boardReal;
            // boardReal = boardImaginative;
            steps.clearVec();
        }
        else{
            cout<<"No possible moves!"<<endl;
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
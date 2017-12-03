#include "PlayerHuman.h"
PlayerHuman::PlayerHuman(Board &board):board(&board){

};


int PlayerHuman::playOneTurn(char player,Player player1, Steps steps, int flag){
    bool choice;
    Piece piece(0, 0);
    player1.printWhoQueue(player);
    steps.optionsToLocate(player);
    int ans = steps.printOptions();
    if (ans == 1) {
        piece = player1.chosenMove();
        choice = player1.checkInput(piece, steps.getVec());
        while (!choice) {// if the player chose something that isn't among the options.
            cout << "Your choice is'n an options.Choose move from the list." << endl;
            steps.printOptions();
            piece = player1.chosenMove();
            choice = player1.checkInput(piece, steps.getVec());
        }
        steps.flip(piece, player);
        board->initializeBoard();
        board->printBoard();
        steps.clearVec();

    } else {
        cout << "No possible moves." << endl;// if the player has no moves.
        cout<<endl;
        flag++;
    }
    return flag;
}
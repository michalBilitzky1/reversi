/*************************
 * name: Michal Bilitzky,
 *       Miri Asher
 * id:205419849
 *    205891492
 *************************/

#include "PlayerHuman.h"
PlayerHuman::PlayerHuman(Board &board):board(&board){

};



void PlayerHuman::playHuman() {
    Steps steps(*this->board);
    Player player(*this->board, steps);
    char x = 'x';
    char o = 'o';
    bool choice;
    Piece piece(0, 0);
    board->initializeBoard();
    board->printBoard();
    while (player.checkHaveMove(steps.getVec())) {//when the player have moves.
        int flag = 0;
        player.printWhoQueue(x);
        steps.optionsToLocate(x);
        int ans = steps.printOptions();
        if (ans == 1) {
            piece = player.chosenMove();
            choice = player.checkInput(piece, steps.getVec());
            while (!choice) {// if the player chose something that isn't among the options.
                cout << "Your choice is'n an options.Choose move from the list." << endl;
                steps.printOptions();
                piece = player.chosenMove();
                choice = player.checkInput(piece, steps.getVec());
            }
            steps.flip(piece, x);
            board->initializeBoard();
            board->printBoard();
            steps.clearVec();

        } else {
            cout << "No possible moves." << endl;// if the player has no moves.
            flag++;
        }
        player.printWhoQueue(o);
        steps.optionsToLocate(o);
        int ans2 = steps.printOptions();
        if (ans2 == 1) {
            piece = player.chosenMove();
            choice = player.checkInput(piece, steps.getVec());
            while (!choice) {
                cout << "Your choice is'n an options.Choose move from the list." << endl;
                steps.printOptions();
                piece = player.chosenMove();
                choice = player.checkInput(piece, steps.getVec());

            }
            steps.flip(piece, o);
            board->initializeBoard();
            board->printBoard();
            steps.clearVec();
        } else {
            cout << "No possible moves." << endl;
            flag++;
            if (flag == 2) {
                player.winner();
                return;
            }

        }
    }
    cout << "x your score is: " << player.counter(player.getPlayerX()) << endl;
    cout << "o your score is: " << player.counter(player.getPlayerO()) << endl;
    cout << endl;
    player.winner();
}

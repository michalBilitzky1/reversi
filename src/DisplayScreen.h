#ifndef EX4_IMAGE_H
#define EX4_IMAGE_H


#include "Board.h"

class DisplayScreen {
private:
    Board* board;
public:
    DisplayScreen(Board &board);
    void printBoard();


    /**********************************

    * @return 1 if there are options
    * for location or 0 if not.
    *  input:none.
     *  output: print the vector of options.
    **********************************/
    int printOptions(vector<Piece> vec);

    /**********************************
       * print who's turn.
       * input: player.
       * output: the player's turn.
**********************************/
    void printWhoQueue(char player);

    void choiceNoOption();

    void noMove();

    void menu();

    void clientConnected();
    void clientChoosesMove(int num1,int num2,char op,int flag);
    void winner(char player,bool draw,int scoreX,int scoreO);
    void errorMessages(string className,const char *msg);
    void portAndServer(string port,string serverIP);
    void  gameMoves(char player,bool wait,Piece piece);
    void menuOption3();
    void nameOfGame();

};


#endif //EX4_IMAGE_H


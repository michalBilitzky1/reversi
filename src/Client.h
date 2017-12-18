#ifndef EX2_CLIENT_H
#define EX2_CLIENT_H


#include "Steps.h"
#include "Player.h"

class Client {
private:
    const char *serverIP;
    int serverPort;
    int clientSocket;
    Board* board;
public:
    /**********************************
        * constructor
        *
        * input: serverip,serverport,board
        * output: none
    **********************************/
    Client(const char *serverIp,int serverPort,Board &board);

    /****************************************
       * name: connectToServer
       *       connect the clion to server
       *
       * input: none
       * output: none
   *******************************************/
    void connectToServer();

    /*************************************************
       * name: sendMove
       *       write the move that choose to socket
       *       (the server read this).
       *
       * input: row,col
       * output: none
   ***************************************************/
    void sendMove(int row, int col);

    /*************************************************
       * name: clientMove
       *       receive the move from the player
       *       and return this.
       *
       * input: client
       * output: piece-the move that choose
   ***************************************************/
    Piece clientMove(Client client);

    /**********************************
        * name: getSocket
        *       return the socket
        *
        * input: none
        * output: socket
    **********************************/
    int getSocket();

    /**********************************
        * name: getPlayer
        *       return the player(x/o)
        *
        * input: player(x/o)
        * output: player(x/o)
    **********************************/
    char getPlayer(char player);

};


#endif //UNTITLED1_CLIENT_H
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
    Client(const char *serverIp,int serverPort,Board &board);
    void connectToServer();
    void sendExercise(int arg1,int arg2);
    Piece clientMove(Client client);
    int getSocket();
    char getPlayer(char player);




};


#endif //UNTITLED1_CLIENT_H

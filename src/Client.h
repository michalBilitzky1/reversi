//
// Created by michalbi on 05/12/17.
//

#ifndef EX2_CLIENT_H
#define EX2_CLIENT_H


class Client {
private:
    const char *serverIP;
    int serverPort;
    int clientSocket;
public:
    Client(const char *serverIp,int serverPort);
    void connectToServer();
    int sendExercise(int arg1,char op,int arg2);
    void clientMove();





};


#endif //EX2_CLIENT_H

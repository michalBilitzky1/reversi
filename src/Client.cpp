#include "Client.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>
#include <cstdlib>

using namespace std;

Client::Client(const char *serverIP, int serverPort,Board &board,DisplayScreen image):board(&board),
                                                                                      serverIP(serverIP),
                                                                                      serverPort(serverPort),
                                                                                      clientSocket(0),image(board){

}


void Client::connectToServer() {
    // Create a socket point
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == -1) {
        throw "Error opening socket";
    }

    // Convert the ip string to a network address
    struct in_addr address;
    if (!inet_aton(serverIP, &address)) {
        throw "Can't parse IP address";
    }
    // Get a hostent structure for the given host address

    struct hostent *server;
    server = gethostbyaddr((const void *) &address, sizeof address, AF_INET);
    if (server == NULL) {
        throw "Host is unreachable";
    }

    // Create a structure for the server address
    struct sockaddr_in serverAddress;
    bzero((char *) &address, sizeof(address));
    serverAddress.sin_family = AF_INET;
    memcpy((char *) &serverAddress.sin_addr.s_addr, (char *) server->h_addr, server->h_length);

    // htons converts values between host and network byte orders
    serverAddress.sin_port = htons(serverPort);

    // Establish a connection with the TCP server
    if (connect(clientSocket, (struct sockaddr *) &serverAddress, sizeof(serverAddress)) == -1) {
        throw "Error connecting to server";
    }
    image.clientConnected();

}

void Client::sendMove(int row, int col){
    // Write the move arguments to the socket
    int n = write(clientSocket , &row,sizeof(row));
    if(n ==-1){
        throw "Error writing row to socket";
    }
    n = write(clientSocket , &col,sizeof(col));
    if(n ==-1){
        throw "Error writing col to socket";
    }
}


void Client::sendCommand(){
    string command;
    char nameOfGame[20];
    int opt;
    cin>>opt;
    cout<<opt;
    if(opt==1) {
        command = "start ";
    }
    else if (opt==2) {
        command ="join ";
    }
    else if(opt==3) {
        command = "list_games";
    }
    else {
        cout<<"Error choosing command"<<endl;
        cout<<"Please enter new option"<<endl;
        cin>>opt;
    }
    if(opt==1 || opt==2) {
        DisplayScreen displayScreen(*this->board);
        displayScreen.nameOfGame();
        cin>>nameOfGame;
        command.append(nameOfGame);
    }
    int n = write(clientSocket ,command.c_str(),command.length()+1);
    if(n ==-1){
        throw "Error writing row to socket";
    }
    /*if(opt==1 || opt==2){
        for(int i=0;i<strlen(nameOfGame);i++) {
            int n = write(clientSocket, &nameOfGame[i], sizeof(nameOfGame));
            if (n == -1) {
                throw "Error writing row to socket";
            }
        }
    }*/
}


Piece Client::clientMove(Client client) {
    int num1, num2;
    char op;
    int flag=0;
    try{
        image.clientChoosesMove(num1,num2,op,flag);
        cin >> num1 >> op >> num2;
        flag = 1;
        image.clientChoosesMove(num1,num2,op,flag);
        client.sendMove(num1, num2);
    }
    catch (const char *msg) {
        image.errorMessages("client",msg);
    }
    Piece piece(num1,num2);
    return piece;
}


int Client::getSocket(){
    return this->clientSocket;
}

char Client::getPlayer(char player) {
    return player;
}
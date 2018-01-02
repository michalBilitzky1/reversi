#include "DisplayScreen.h"

DisplayScreen::DisplayScreen(Board &board):board(&board){

}


void DisplayScreen :: printBoard() {
    for (int i = 1; i <= board->getRowBoard(); i++) {
        cout << " | " << i;
    }
    cout << " |";
    cout << endl;
    for (int i = 1; i <= board->getRowBoard() * 4.5; i++) {
        cout << "-";
    }
    cout << endl;

    for (int i = 1; i <= board->getRowBoard(); i++) {
        cout << i << "| ";
        for (int j = 1; j <= board->getColBoard(); j++) {

            cout << board->getBoard()[i][j] << " | ";
        }
        cout << endl;
        for (int i = 1; i <= board->getRowBoard() * 4.5; i++) {
            cout << "-";
        }
        cout << endl;
    }
}


int DisplayScreen::printOptions(vector<Piece> vec){
    if(vec.empty()){
        return 0;
    }
    else {
        cout << "Your possible moves: ";
        for (int i = 1; i < vec.size(); i++) {
            for (int j = i + 1; j < vec.size(); j++) {
                if (vec.at(i).getRow() == vec.at(j).getRow() && vec.at(j).getCol() == vec.at(i).getCol()) {
                    vec.erase(vec.begin() + i);
                }
            }
            // vec2.push_back(vec.at(i));
            cout << "(" << vec.at(i).getRow() << "," << vec.at(i).getCol() << ")";
        }
        // vec2.push_back(vec.at(0));
        cout << "(" << vec.at(0).getRow() << "," << vec.at(0).getCol() << ")" << endl;
        cout << endl;
        return 1;
    }

}

void DisplayScreen::printWhoQueue(char player){
    cout<<player<<": It`s your move."<<endl;
}

void DisplayScreen:: choiceNoOption(){
    cout << "Your choice is'nt an options.Choose move from the list." << endl;
}

void DisplayScreen::noMove() {
    cout << "No possible moves." << endl;
    cout<<endl;
}

void DisplayScreen::menu() {
    cout<<"Welcome to reversi game!"<<endl;
    cout<<"Choose game:"<<endl;//choose between 2 options of games
    cout<<"1: one player (human against computer)"<<endl;
    cout<<"2: two players (human against human)"<<endl;
    cout<<"3: A remote player"<<endl;
}

void DisplayScreen::menuOption3() {
    cout<<"Choose option"<<endl;
    cout<<"1: Start"<<endl;
    cout<<"2: Join"<<endl;
    cout<<"3: Get List"<<endl;
}


void DisplayScreen:: clientConnected(){
    cout << "client Connected to server" << endl;
}

void DisplayScreen:: clientChoosesMove(int num1,int num2,char op,int flag){
    if(flag==0){
        cout << "Enter a move (x,y):";
    }
    if(flag==1){
        cout << "Sending choice: " << num1 << op << num2 << endl;
    }
    if(flag==2){
        cout<<"Please enter your move- row col:";
    }

}

void DisplayScreen::winner(char player,bool draw,int scoreX,int scoreO){
    cout << "x the score is: " << scoreX << endl;
    cout << "o the score is: " << scoreO << endl;
    cout<<endl;
    if(draw==false){
        cout<<player<<" is the winner!"<<endl;
    }
    else{
        cout << "Is a draw" << endl;
    }
}

void DisplayScreen::errorMessages(string className,const char *msg){
    if(className == "client"){
        cout << "Failed to send exercise to server. Reason: " << msg << endl;
    }
    else if(className == "game"){
        cout << "Failed to connect to server. Reason:" << msg << endl;
    }
    else{
        cout << "Error writing to socket" << endl;
    }
}

void DisplayScreen:: portAndServer(string port,string serverIP){
    cout<<"port:"<<port<<endl;
    cout<<"serverIP:"<<serverIP<<endl;
}

void DisplayScreen:: gameMoves(char player,bool wait,Piece piece){
    if(wait==true){
        cout << "waiting for other player's move..." << endl;
        cout << endl;
    }
    else{
        cout<<player<<" played: ("<<piece.getRow()<<","<<piece.getCol()<<")"<<endl;
        cout<<endl;
    }
}

void DisplayScreen::nameOfGame(){
    cout<<"Please enter name of game that you want to play"<<endl;
}
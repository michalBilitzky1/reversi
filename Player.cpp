/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/

#include "Player.h"


Player::Player(Board &b, Steps s1) :b(&b) ,s1(b) {
    player_x='x';
    player_o = 'o';
    this->s1 = s1;
}


void Player::printWhoQueue(char player){
    cout<<player<<": It`s your move."<<endl;

}

Piece Player::chosenMove(){
    cout<<"Please enter your move- row col:";
    int x,y;
    Piece piece(0,0);
    cin>>x>>y;
    if(cin.fail()){
        cin.clear();
        cin.ignore(256,'\n');
    }
    piece= Piece(x,y);
    return piece;
}

bool Player::checkInput(Piece piece,vector<Piece> vec) {

    int counter=0;
    for(int i=0;i<vec.size();i++){
        if(piece.getRow()==vec.at(i).getRow() && piece.getCol()==vec.at(i).getCol()) {
            counter++;
        }
    }
    if(counter>=1){
        return true;
    }if (counter==0){
        return false;
    }

}





bool Player:: checkHaveMove(vector<Piece> vec){
    if(countO()+countX()==(b->get_row())*(b->get_col())){
        return false;
    }

    else
        return true;
}




int Player::countX(){
    char** board = b->get_board();
    int counter=0;
    for(int i=1;i<=b->get_row();i++){
        for(int j=1;j<=b->get_col();j++){
            if(board[i][j]==player_x){
                counter++;
            }
        }
    }
    return counter;
}


int Player::countO(){
    char** board = b->get_board();
    int counter=0;
    for(int i=1;i<=b->get_row();i++){
        for(int j=1;j<=b->get_col();j++){
            if(board[i][j]==player_o){
                counter++;
            }
        }
    }
    return counter;
}


void Player::winner(){
    if(countX()>countO()){
        cout<<player_x<<" is the winner!"<<endl;
    }
    else if(countX()<countO()){
        cout<<player_o<<" is the winner!"<<endl;
    }
    else {
        cout << "Is a draw" << endl;
    }
}

char Player:: getPlayerO(){
    return player_o;
}

char Player:: getPlayerX(){
    return player_x;
}
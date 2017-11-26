/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/
#include "Steps.h"

Steps::Steps(Board &board):board(&board){

    player_o = 'o';
    player_x = 'x';
    vec.resize(0,0);
    //vec2.resize(0,0);
};


void Steps::optionsToLocate(char player) {
    char not_player;
    if(player=='x'){
        not_player='o';
    }
    else
        not_player = 'x';

    for (int i = 0; i < this->board->getRowBoard(); i++) {
        for (int j = 0; j < this->board->getColBoard(); j++) {
            if (this->board->getBoard()[i][j] == not_player) {
                //down
                if (i>1 && i< board->getRowBoard()) {
                    if (this->board->getBoard()[i - 1][j] == player) {
                        int p = i;
                        int t = j;
                        while (this->board->getBoard()[p][j] == not_player) {
                            if(p < board->getRowBoard()) {
                                p++;
                            } else
                                break;
                        }
                        if (this->board->getBoard()[p][j] == ' ') {
                            Piece piece(p, j);
                            vec.push_back(piece);
                        }
                    }
                }
                //up
                if (i< board->getRowBoard() && i>1) {
                    if (this->board->getBoard()[i + 1][j] == player) {
                        int p = i;
                        int t = j;
                        while (this->board->getBoard()[p][j] == not_player) {
                            if(p>1) {
                                p--;
                            }else
                                break;
                        }

                        if (this->board->getBoard()[p][j] == ' ') {
                            Piece piece(p, j);
                            vec.push_back(piece);
                        }
                    }
                }
                //down and right
                if(i>1 && j>1 && i< board->getRowBoard() && j< board->getColBoard()) {
                    if (this->board->getBoard()[i - 1][j - 1] == player) {
                        int p = i;
                        int t = j;
                        while (this->board->getBoard()[p][t] == not_player) {
                            if(p< board->getRowBoard() && t< board->getColBoard()) {
                                p++;
                                t++;
                            }else
                                break;
                        }

                        if (this->board->getBoard()[p][t] == ' ') {
                            Piece piece(p, t);
                            vec.push_back(piece);
                        }
                    }
                }
                //up and left
                if (i< board->getRowBoard() && j< board->getColBoard() && i>1 && j>1) {
                    if (this->board->getBoard()[i + 1][j + 1] == player) {
                        int p = i;
                        int t = j;
                        while (this->board->getBoard()[p][t] == not_player) {
                            if(p>1 && t>1) {
                                p--;
                                t--;
                            }else
                                break;
                        }
                        if (this->board->getBoard()[p][t] == ' ') {
                            Piece piece(p, t);
                            vec.push_back(piece);
                        }
                    }
                }
                //down and left
                if(i>1 && j< board->getColBoard() && i< board->getRowBoard() && j>1) {
                    if (this->board->getBoard()[i - 1][j + 1] == player) {
                        int p = i;
                        int t = j;
                        while (this->board->getBoard()[p][t] == not_player) {
                            if(p< board->getRowBoard() && t>1) {
                                p++;
                                t--;
                            }else
                                break;
                        }
                        if (this->board->getBoard()[p][t] == ' ') {
                            Piece piece(p, t);
                            vec.push_back(piece);
                        }
                    }
                }
                //up and right
                if (i< board->getRowBoard() && j>1 && i>1 && j< board->getColBoard()) {
                    if (this->board->getBoard()[i + 1][j - 1] == player) {
                        int p = i;
                        int t = j;
                        while (this->board->getBoard()[p][t] == not_player) {
                            if(p>1 && t< board->getColBoard()) {
                                p--;
                                t++;
                            }else
                                break;
                        }
                        if (this->board->getBoard()[p][t] == ' ') {
                            Piece piece(p, t);
                            vec.push_back(piece);
                        }
                    }
                }
                //right
                if(j>1 && j< board->getColBoard()) {
                    if (this->board->getBoard()[i][j - 1] == player) {
                        int p = i;
                        int t = j;
                        while (this->board->getBoard()[i][t] == not_player) {
                            if(t< board->getColBoard()){
                                t++;
                            }else
                                break;
                        }
                        if (this->board->getBoard()[i][t] == ' ') {
                            Piece piece(i, t);
                            vec.push_back(piece);
                        }
                    }
                }
                //left
                if(j< board->getColBoard() && j>1) {
                    if (this->board->getBoard()[i][j + 1] == player) {
                        int p = i;
                        int t = j;
                        while (this->board->getBoard()[i][t] == not_player) {
                            if(t>1) {
                                t--;
                            }else
                                break;
                        }
                        if (this->board->getBoard()[i][t] == ' ') {
                            Piece piece(i, t);
                            vec.push_back(piece);
                        }
                    }
                }
            }
        }
    }
}


int Steps::printOptions(){
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

vector<Piece> Steps::getVec(){
    return this->vec;
}

/*vector<Piece> Steps::getVec2(){
    return this->vec2;
}

void Steps::clearVec2(){
    this->vec2.clear();;
}*/

void Steps::clearVec(){
    this->vec.clear();;
}

void Steps::addPiece(Piece piece_to_add, char player){
    this->board->getBoard()[piece_to_add.getRow()][piece_to_add.getCol()]=player;
}


void Steps::flip(Piece end, char player) {
    char not_playing;
    if(player=='x'){
        not_playing='o';
    }
    else {
        not_playing = 'x';
    }
    int i=1;
    int j=1;
    int t=0;
    int p=0;

    //up
    if (end.getRow() > 1) {
        while (this->board->getBoard()[end.getRow() - i][end.getCol()] == not_playing) {
            if(end.getRow()-i>1) {
                i++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow() - i][end.getCol()] == ' ') {
            i = 1;
        } else {
            while (p < i) {
                Piece add_piece(end.getRow() - p, end.getCol());
                if (not_playing == player_o) {
                    addPiece(add_piece, player_x);
                } else {
                    addPiece(add_piece, player_o);
                }
                p++;
            }
            i = 1;
            p = 0;
        }
    }

    //down
    if (end.getRow() < board->getRowBoard()) {
        while (this->board->getBoard()[end.getRow() + i][end.getCol()] == not_playing) {
            if(end.getRow()+i< board->getRowBoard()) {
                i++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow() + i][end.getCol()] == ' ') {
            i = 1;
        } else {
            while (p < i) {
                Piece add_piece(end.getRow() + p, end.getCol());
                if (not_playing == player_o) {
                    addPiece(add_piece, player_x);
                } else {
                    addPiece(add_piece, player_o);
                }
                p++;
            }
            i = 1;
            p = 0;

        }
    }
    //left
    if (end.getCol() > 1) {
        while (this->board->getBoard()[end.getRow()][end.getCol() - j] == not_playing) {
            if(end.getCol()-j>1) {
                j++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow()][end.getCol() - j] == ' ') {
            j = 1;

        } else {
            while (t < j) {
                Piece add_piece(end.getRow(), end.getCol() - t);
                if (not_playing == player_o) {
                    addPiece(add_piece, player_x);
                } else {
                    addPiece(add_piece, player_o);
                }
                t++;
            }
            j = 1;
            t = 0;
        }
    }
    //right
    if (end.getCol() < board->getColBoard()) {
        while (this->board->getBoard()[end.getRow()][end.getCol() + j] == not_playing) {
            if(end.getCol()+j < board->getColBoard()) {
                j++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow()][end.getCol() + j] == ' ') {
            j = 1;

        } else {
            while (t < j) {
                Piece add_piece(end.getRow(), end.getCol() + t);
                if (not_playing == player_o) {
                    addPiece(add_piece, player_x);
                } else {
                    addPiece(add_piece, player_o);
                }
                t++;
            }
            j = 1;
            t = 0;
        }
    }
    //up and left
    if (end.getRow() > 1 && end.getCol() > 1) {
        while (this->board->getBoard()[end.getRow() - i][end.getCol() - j] == not_playing) {
            if(end.getRow()-i>1 && end.getCol()-j >1) {
                i++;
                j++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow() - i][end.getCol() - j] == ' ') {
            i = 1;
            j = 1;

        } else {
            while (p < i && t < j) {
                Piece add_piece(end.getRow() - p, end.getCol() - t);
                if (not_playing == player_o) {
                    addPiece(add_piece, player_x);
                } else {
                    addPiece(add_piece, player_o);
                }
                p++;
                t++;
            }
            p = 0;
            t = 0;
            i = 1;
            j = 1;
        }
    }
    //up and right
    if (end.getRow() > 1 && end.getCol() < board->getColBoard()) {
        while (this->board->getBoard()[end.getRow() - i][end.getCol() + j] == not_playing) {
            if(end.getRow()-i>1 && end.getCol()+j< board->getColBoard()) {
                i++;
                j++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow() - i][end.getCol() + j] == ' ') {
            i = 1;
            j = 1;

        } else {
            while (p < i && t < j) {
                Piece add_piece(end.getRow() - p, end.getCol() + t);
                if (not_playing == player_o) {
                    addPiece(add_piece, player_x);
                } else {
                    addPiece(add_piece, player_o);
                }
                p++;
                t++;
            }
            p = 0;
            t = 0;
            i = 1;
            j = 1;
        }
    }
    //down and left
    if (end.getRow() < board->getRowBoard() && end.getCol() > 1) {
        while (this->board->getBoard()[end.getRow() + i][end.getCol() - j] == not_playing) {
            if(end.getRow()+i < board->getRowBoard() && end.getCol()-j>1) {
                i++;
                j++;
            } else
                break;
        }
        if (this->board->getBoard()[end.getRow() + i][end.getCol() - j] == ' ') {
            i = 1;
            j = 1;

        } else {
            while (p < i && t < j) {
                Piece add_piece(end.getRow() + p, end.getCol() - t);
                if (not_playing == player_o) {
                    addPiece(add_piece, player_x);
                } else {
                    addPiece(add_piece, player_o);
                }
                p++;
                t++;
            }
            p = 0;
            t = 0;
            i = 1;
            j = 1;
        }
    }
    //down and right
    if (end.getRow() < board->getRowBoard() && end.getCol() < board->getColBoard()) {
        while (this->board->getBoard()[end.getRow() + i][end.getCol() + j] == not_playing) {
            if(end.getRow()+i<board->getRowBoard() && end.getCol()+j<board->getColBoard()) {
                i++;
                j++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow() + i][end.getCol() + j] == ' ') {
            i = 1;
            j = 1;

        } else {
            while (p < i && t < j) {
                Piece add_piece(end.getRow() + p, end.getCol() + t);
                if (not_playing == player_o) {
                    addPiece(add_piece, player_x);
                } else {
                    addPiece(add_piece, player_o);
                }
                p++;
                t++;
            }
            p = 0;
            t = 0;
            i = 1;
            j = 1;
        }
    }
}


void Steps::notFlip(Piece end, char player){
    char not_playing;
    if(player=='x'){
        not_playing='o';
    }
    else {
        not_playing = 'x';
    }
    int i=1;
    int j=1;
    int t=0;
    int p=0;

    //up
    if (end.getRow() > 1) {
        while (this->board->getBoard()[end.getRow() - i][end.getCol()] == not_playing) {
            if(end.getRow()-i>1) {
                i++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow() - i][end.getCol()] == ' ') {
            i = 1;
        } else {
            Piece add_piece(end.getRow() - p, end.getCol());

                removePiece(add_piece);

            p=1;
            while (p < i-1) {
                Piece add_piece1(end.getRow() - p, end.getCol());
                if (not_playing == player_o) {
                    addPiece(add_piece1, player_o);
                } else {
                    addPiece(add_piece1, player_x);
                }
                p++;
            }
            i = 1;
            p = 0;
        }
    }

    //down
    if (end.getRow() < board->getRowBoard()) {
        while (this->board->getBoard()[end.getRow() + i][end.getCol()] == not_playing) {
            if(end.getRow()+i< board->getRowBoard()) {
                i++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow() + i][end.getCol()] == ' ') {
            i = 1;
        } else {
            Piece add_piece(end.getRow() + p, end.getCol());

                removePiece(add_piece);

            p=1;
            while (p < i-1) {
                Piece add_piece1(end.getRow() + p, end.getCol());
                if (not_playing == player_o) {
                    addPiece(add_piece1, player_o);
                } else {
                    addPiece(add_piece1, player_x);
                }
                p++;
            }
            i = 1;
            p = 0;

        }
    }
    //left
    if (end.getCol() > 1) {
        while (this->board->getBoard()[end.getRow()][end.getCol() - j] == not_playing) {
            if(end.getCol()-j>1) {
                j++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow()][end.getCol() - j] == ' ') {
            j = 1;

        } else {
            Piece add_piece(end.getRow() , end.getCol() - t);

                removePiece(add_piece);

            t=1;
            while (t < j-1) {
                Piece add_piece1(end.getRow(), end.getCol() - t);
                if (not_playing == player_o) {
                    addPiece(add_piece1, player_o);
                } else {
                    addPiece(add_piece1, player_x);
                }
                t++;
            }
            j = 1;
            t = 0;
        }
    }
    //right
    if (end.getCol() < board->getColBoard()) {
        while (this->board->getBoard()[end.getRow()][end.getCol() + j] == not_playing) {
            if(end.getCol()+j < board->getColBoard()) {
                j++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow()][end.getCol() + j] == ' ') {
            j = 1;

        } else {
            Piece add_piece(end.getRow() , end.getCol() + t);

                removePiece(add_piece);

            t=1;
            while (t < j-1) {
                Piece add_piece1(end.getRow(), end.getCol() + t);
                if (not_playing == player_o) {
                    addPiece(add_piece1, player_o);
                } else {
                    addPiece(add_piece1, player_x);
                }
                t++;
            }
            j = 1;
            t = 0;
        }
    }
    //up and left
    if (end.getRow() > 1 && end.getCol() > 1) {
        while (this->board->getBoard()[end.getRow() - i][end.getCol() - j] == not_playing) {
            if(end.getRow()-i>1 && end.getCol()-j >1) {
                i++;
                j++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow() - i][end.getCol() - j] == ' ') {
            i = 1;
            j = 1;

        } else {
            Piece add_piece(end.getRow() - p , end.getCol() - t);

                removePiece(add_piece);

            t=1; p=1;
            while (t < j-1 && p<i-1) {
                Piece add_piece1(end.getRow() - p, end.getCol() - t);
                if (not_playing == player_o) {
                    addPiece(add_piece1, player_o);
                } else {
                    addPiece(add_piece1, player_x);
                }
                t++;p++;
            }
            p = 0;
            t = 0;
            i = 1;
            j = 1;
        }
    }
    //up and right
    if (end.getRow() > 1 && end.getCol() < board->getColBoard()) {
        while (this->board->getBoard()[end.getRow() - i][end.getCol() + j] == not_playing) {
            if(end.getRow()-i>1 && end.getCol()+j< board->getColBoard()) {
                i++;
                j++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow() - i][end.getCol() + j] == ' ') {
            i = 1;
            j = 1;

        } else {
            Piece add_piece(end.getRow() - p , end.getCol() + t);

                removePiece(add_piece);

            t=1; p=1;
            while (t < j-1 && p<i-1) {
                Piece add_piece1(end.getRow() - p, end.getCol() + t);
                if (not_playing == player_o) {
                    addPiece(add_piece1, player_o);
                } else {
                    addPiece(add_piece1, player_x);
                }
                t++;p++;
            }
            p = 0;
            t = 0;
            i = 1;
            j = 1;
        }
    }
    //down and left
    if (end.getRow() < board->getRowBoard() && end.getCol() > 1) {
        while (this->board->getBoard()[end.getRow() + i][end.getCol() - j] == not_playing) {
            if(end.getRow()+i < board->getRowBoard() && end.getCol()-j>1) {
                i++;
                j++;
            } else
                break;
        }
        if (this->board->getBoard()[end.getRow() + i][end.getCol() - j] == ' ') {
            i = 1;
            j = 1;

        } else {
            Piece add_piece(end.getRow() + p , end.getCol() - t);

                removePiece(add_piece);

            t=1; p=1;
            while (t < j-1 && p<i-1) {
                Piece add_piece1(end.getRow() + p, end.getCol() - t);
                if (not_playing == player_o) {
                    addPiece(add_piece1, player_o);
                } else {
                    addPiece(add_piece1, player_x);
                }
                t++;p++;
            }
            p = 0;
            t = 0;
            i = 1;
            j = 1;
        }
    }
    //down and right
    if (end.getRow() < board->getRowBoard() && end.getCol() < board->getColBoard()) {
        while (this->board->getBoard()[end.getRow() + i][end.getCol() + j] == not_playing) {
            if(end.getRow()+i<board->getRowBoard() && end.getCol()+j<board->getColBoard()) {
                i++;
                j++;
            }else
                break;
        }
        if (this->board->getBoard()[end.getRow() + i][end.getCol() + j] == ' ') {
            i = 1;
            j = 1;

        } else {
            Piece add_piece(end.getRow() + p , end.getCol() + t);

                removePiece(add_piece);

            t=1; p=1;
            while (t < j-1 && p<i-1) {
                Piece add_piece1(end.getRow() + p, end.getCol() + t);
                if (not_playing == player_o) {
                    addPiece(add_piece1, player_o);
                } else {
                    addPiece(add_piece1, player_x);
                }
                t++;p++;
            }
            p = 0;
            t = 0;
            i = 1;
            j = 1;
        }
    }
}

void Steps::removePiece(Piece piece_to_remove){
    this->board->getBoard()[piece_to_remove.getRow()][piece_to_remove.getCol()]=' ';
}
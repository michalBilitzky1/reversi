/*************************
 * name: Michal Bilitzky
 * id:205419849
 *************************/
#include "Steps.h"

Steps::Steps(Board &b):b(&b){

    player_o = 'o';
    player_x = 'x';
    vec.resize(0,0);
};


void Steps::optionsToLocate(char player) {
    char** board = b->get_board();
    char not_player;
    if(player=='x'){
        not_player='o';
    }
    else
        not_player = 'x';

    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {

            if (board[i][j] == not_player) {
                if (i>1) {
                    if (board[i - 1][j] == player) {
                        int p = i;
                        int t = j;
                        while (board[p][j] == not_player) {
                            if (p<8)
                            { p++;}
                            else {
                                break;
                            }
                        }

                        if (board[p][j] == ' ') {
                            Piece piece(p, j);
                            vec.push_back(piece);
                        }
                    }
                }
                if (i<8) {
                    if (board[i + 1][j] == player) {
                        int p = i;
                        int t = j;
                        while (board[p][j] == not_player) {
                            if(p>1){
                                p--;}
                            else{
                                break;
                            }
                        }

                        if (board[p][j] == ' ') {
                            Piece piece(p, j);
                            vec.push_back(piece);
                        }
                    }
                }

                if(i>1 && j>1) {
                    if (board[i - 1][j - 1] == player) {
                        int p = i;
                        int t = j;
                        while (board[p][t] == not_player) {
                            if(p<8 && t<8){
                                p++;
                                t++;}
                            else{
                                break;
                            }
                        }

                        if (board[p][t] == ' ') {
                            Piece piece(p, t);
                            vec.push_back(piece);
                        }
                    }
                }
                if (i<8 && j<8) {
                    if (board[i + 1][j + 1] == player) {
                        int p = i;
                        int t = j;
                        while (board[p][t] == not_player) {
                            if(p>1 && t>1){
                                p--;
                                t--;}
                            else{
                                break;
                            }
                        }

                        if (board[p][t] == ' ') {
                            Piece piece(p, t);
                            vec.push_back(piece);
                        }
                    }
                }

                if(i>1 && j<8) {
                    if (board[i - 1][j + 1] == player) {
                        int p = i;
                        int t = j;
                        while (board[p][t] == not_player) {
                            if(p<8 && t>1){
                                p++;
                                t--;}
                            else{break;}
                        }
                        if (board[p][t] == ' ') {
                            Piece piece(p, t);
                            vec.push_back(piece);
                        }
                    }
                }
                if (i<8 && j>1) {
                    if (board[i + 1][j - 1] == player) {
                        int p = i;
                        int t = j;
                        while (board[p][t] == not_player) {
                            if(p>1 && t<8){
                                p--;
                                t++;}
                            else{break;}
                        }

                        if (board[p][t] == ' ') {
                            Piece piece(p, t);
                            vec.push_back(piece);
                        }
                    }
                }

                if(j>1) {
                    if (board[i][j - 1] == player) {
                        int p = i;
                        int t = j;
                        while (board[i][t] == not_player) {
                            if(t<8)
                            {t++;}
                            else {break;}
                        }

                        if (board[i][t] == ' ') {
                            Piece piece(i, t);
                            vec.push_back(piece);
                        }
                    }
                }
                if(j<8) {
                    if (board[i][j + 1] == player) {
                        int p = i;
                        int t = j;
                        while (board[i][t] == not_player) {
                            if(t>1)
                            {t--;}
                            else{break;}
                        }

                        if (board[i][t] == ' ') {
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
            cout << "(" << vec.at(i).getRow() << "," << vec.at(i).getCol() << ")";
        }
        cout << "(" << vec.at(0).getRow() << "," << vec.at(0).getCol() << ")" << endl;
        cout << endl;
        return 1;
    }

}

vector<Piece> Steps::getVec(){
    return this->vec;
}



void Steps::clearVec(){
    this->vec.clear();;
}

void Steps::addX(Piece piece_to_add){
    char** board = b->get_board();
    board[piece_to_add.getRow()][piece_to_add.getCol()]=player_x;
}

void Steps::addO(Piece piece_to_add){
    char** board = b->get_board();
    board[piece_to_add.getRow()][piece_to_add.getCol()]=player_o;
}


void Steps::pieceToFlip(Piece end, char player) {
    char **board = b->get_board();
    char notPlaying;
    if (player == 'x') {
        notPlaying = 'o';
    } else {
        notPlaying = 'x';
    }

    int i = 1;
    int j = 1;
    int t = 0;
    int p = 0;


    if (end.getRow() > 1) {
        while (board[end.getRow() - i][end.getCol()] == notPlaying) {
            if(end.getRow() - i>1)
            { i++;}
            else{
                break;
            }
        }

        if (board[end.getRow() - i][end.getCol()] == ' ') {
            i = 1;

        } else {
            while (p < i) {
                Piece add_piece(end.getRow() - p, end.getCol());
                if (notPlaying == player_o) {
                    addX(add_piece);
                } else {
                    addO(add_piece);
                }
                p++;
            }
            i = 1;
            p = 0;
        }
    }

    if (end.getRow() < 8) {
        while (board[end.getRow() + i][end.getCol()] == notPlaying) {
            if (end.getRow() + i<8)
                i++;
            else
                break;
        }
        if (board[end.getRow() + i][end.getCol()] == ' ') {
            i = 1;

        } else {
            while (p < i) {
                Piece add_piece(end.getRow() + p, end.getCol());
                if (notPlaying == player_o) {
                    addX(add_piece);
                } else {
                    addO(add_piece);
                }
                p++;
            }
            i = 1;
            p = 0;

        }
    }

    if (end.getCol() > 1) {
        while (board[end.getRow()][end.getCol() - j] == notPlaying) {
            if (end.getCol() - j>1)
                j++;
            else
                break;
        }
        if (board[end.getRow()][end.getCol() - j] == ' ') {
            j = 1;

        } else {
            while (t < j) {
                Piece add_piece(end.getRow(), end.getCol() - t);
                if (player == player_x) {
                    addX(add_piece);
                } else {
                    addO(add_piece);
                }
                t++;
            }
            j = 1;
            t = 0;
        }
    }

    if (end.getCol() < 8) {
        while (board[end.getRow()][end.getCol() + j] == notPlaying) {
            if (end.getCol() + j<8)
                j++;
            else
                break;
        }
        if (board[end.getRow()][end.getCol() + j] == ' ') {
            j = 1;

        } else {
            while (t < j) {
                Piece add_piece(end.getRow(), end.getCol() + t);
                if (notPlaying == player_o) {
                    addX(add_piece);
                } else {
                    addO(add_piece);
                }
                t++;
            }
            j = 1;
            t = 0;
        }
    }

    if (end.getRow() > 1 && end.getCol() > 1) {
        while (board[end.getRow() - i][end.getCol() - j] == notPlaying) {
            if(end.getRow()-i>1 && end.getCol()-j>1) {
                i++;
                j++;
            }
            else
                break;
        }
        if (board[end.getRow() - i][end.getCol() - j] == ' ') {
            i = 1;
            j = 1;

        } else {
            while (p < i && t < j) {
                Piece add_piece(end.getRow() - p, end.getCol() - t);
                if (notPlaying == player_o) {
                    addX(add_piece);
                } else {
                    addO(add_piece);
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

    if (end.getRow() > 1 && end.getCol() < 8) {
        while (board[end.getRow() - i][end.getCol() + j] == notPlaying) {
            if(end.getRow()-i>1 && end.getCol()+j<8)
            { i++;
                j++;
            }
            else
                break;
        }
        if (board[end.getRow() - i][end.getCol() + j] == ' ') {
            i = 1;
            j = 1;

        } else {
            while (p < i && t < j) {
                Piece add_piece(end.getRow() - p, end.getCol() + t);
                if (notPlaying == player_o) {
                    addX(add_piece);
                } else {
                    addO(add_piece);
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

    if (end.getRow() < 8 && end.getCol() > 1) {
        while (board[end.getRow() + i][end.getCol() - j] == notPlaying) {
            if(end.getRow()+i<8 && end.getCol()-j>1) {
                i++;
                j++;
            }
            else
                break;
        }
        if (board[end.getRow() + i][end.getCol() - j] == ' ') {
            i = 1;
            j = 1;

        } else {
            while (p < i && t < j) {
                Piece add_piece(end.getRow() + p, end.getCol() - t);
                if (notPlaying == player_o) {
                    addX(add_piece);
                } else {
                    addO(add_piece);
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
    if (end.getRow() < 8 && end.getCol() < 8) {

        while (board[end.getRow() + i][end.getCol() + j] == notPlaying) {
            if(end.getRow()+i<8 && end.getCol()+j<8) {
                i++;
                j++;
            }
            else
                break;
        }
        if (board[end.getRow() + i][end.getCol() + j] == ' ') {
            i = 1;
            j = 1;

        } else {
            while (p < i && t < j) {
                Piece add_piece(end.getRow() + p, end.getCol() + t);
                if (notPlaying == player_o) {
                    addX(add_piece);
                } else {
                    addO(add_piece);
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


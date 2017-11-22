//
// Created by miri on 22/11/17.
//

#include "ComputerBoard.h"



ComputerBoard::ComputerBoard(Board &board, Steps steps, Player player): board(&board),steps(board),player(board,steps){
    this->steps=steps;
    this->player=player;
}

void ComputerBoard::checkMoveComputer(){

    steps.optionsToLocate(player.getPlayerO());
    vector<Piece> vector=steps.getVec();//וקטור מחזיק את כל האופציות שיש למחשב כעת על כל אופציה בנפרד נעשה פליפ

    //maybe the size sould be -1
    for(int i=0; i<vector.size();i++){
        steps.pieceToFlip(vector.at(i),player.getPlayerO());//עשה פליפ לאופצייה הI
        checkMoveHuman();//עושה אותו דבר לשחן האנושי
    }

}

int ComputerBoard::grade() {
    int grade;
    grade=player.countX()-player.countO();
    return grade;
}

vector<int> ComputerBoard::checkMoveHuman(){
    vector<int> vectorOfGradeCom;
    steps.optionsToLocate(player.getPlayerX());
    vector<Piece> vectorToHuman=steps.getVec();
    for(int j=0; j<vectorToHuman.size();j++){
        steps.pieceToFlip(vectorToHuman.at(j),player.getPlayerX());
        int grade=grade();
        vectorOfGradeCom.push_back(grade);
    }
    return vectorOfGradeCom;
}

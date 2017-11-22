//
// Created by miri on 22/11/17.
//

#include "ComputerBoard.h"


ComputerBoard::ComputerBoard(Board &board, Steps steps, Player player): board(&board),steps(board),player(board,steps){
    this->steps=steps;
    this->player=player;
}


int ComputerBoard::checkMoveComputer(){

    steps.optionsToLocate(player.getPlayerO());
    vector<Piece> vector=steps.getVec();//וקטור מחזיק את כל האופציות שיש למחשב כעת על כל אופציה בנפרד נעשה פליפ
    std::vector<int> minGrade;
    for(int i=0; i<vector.size()-1;i++){
        steps.pieceToFlip(vector.at(i),player.getPlayerO());//עשה פליפ לאופצייה הI
        //checkMoveHuman();//עושה אותו דבר לשחן האנושי
        minGrade.push_back(checkMoveHuman());
        //cout<<minGrade.at(i);
    }

    int min = minGrade.at(0);
    for(int i=1;i<=minGrade.size()-1;i++){
        if (min>minGrade.at(i)){
            min = minGrade.at(i);
        }
    }
    int i=0;
    while(min!=minGrade.at(i)){
        i++;
    }
    return i;

}

int ComputerBoard::checkMoveHuman(){
    steps.optionsToLocate(player.getPlayerX());
    vector <Piece> vec = steps.getVec();
    vector <int> grades;
    for(int i=0;i<=vec.size()-1;i++){
        steps.pieceToFlip(vec.at(i),player.getPlayerX());
        int grade = player.countX()-player.countO();
        grades.push_back(grade);
    }
    int max = grades.at(0);
    for(int i=1;i<=grades.size()-1;i++){
        if (max<grades.at(i)){
            max = grades.at(i);
        }
    }
    return max;

}

//
// Created by miri on 22/11/17.
//

#include "ComputerBoard.h"




//המחלקה מקבלת גם לוח דמיוני וגם את האמיתי את כל הסטפס מבצעת בדמיוני
ComputerBoard::ComputerBoard(Board &boardReal,Board &boardImaginative, Player player, Steps steps):
        boardReal(&boardReal),boardImaginative(&boardImaginative),steps(boardImaginative),player(boardImaginative,steps)
{
    this->steps=steps;
    this->player=player;

}

//כל הסטפים פה דמיוניים לחלוטין
int ComputerBoard::checkMoveComputer(vector<Piece> vector){

    // steps.optionsToLocate(player.getPlayerO());
    // vector<Piece> vector=steps.getVec();//וקטור מחזיק את כל האופציות שיש למחשב כעת על כל אופציה בנפרד נעשה פליפ
    //cout<<vector.at(1).getRow()<<vector.at(1).getCol()<<endl;
    // cout<<vector.size()<<endl;


    std::vector<int> minGrade;
    for(int i=0; i<vector.size()-1;i++){
        steps.flip(vector.at(i), player.getPlayerO());//עשה פליפ לאופצייה הI
        minGrade.push_back(checkMoveHuman());
        steps.notFlip(vector.at(i), player.getPlayerO());
     //   boardImaginative=boardReal;//לאחר שבודק לגבי השחקן השני מחזיר את הלוח ללוח האמיתי. כדי שלא ישנה את הלוח האמיתי כל פעם
        // cout<<"vec" <<vector.at(2).getRow()<<vector.at(2).getCol()<<endl;
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
    cout<<"I:"<<i<<endl;
    return i;
}

int ComputerBoard::checkMoveHuman(){
    //Board *temp =boardImaginative;//שומר את הלוח הדמיוני כדי שהפליפ לא ישנה אותו
    steps.optionsToLocate(player.getPlayerX());
    vector <Piece> vec = steps.getVec();
    vector <int> grades;

    /*  for(int i=0;i<vec.size()-1;i++){
          cout<<"vec: "<<vec.at(i).getRow()<<","<<vec.at(i).getCol()<<endl;
      }*/

    for(int i=0;i<=vec.size()-1;i++){
        steps.flip(vec.at(i), player.getPlayerX());
        int grade = player.countX()-player.countO();
        grades.push_back(grade);
        steps.notFlip(vec.at(i), player.getPlayerX());
        // boardReal=boardImaginative;
        //boardReal->printBoard();
        //boardImaginative=temp;//אחרי כל פליפ מחזיר ללוח הדמיוני שעלה
    }
    cout<<"grade2 "<<grades.at(1)<<endl;
    int max = grades.at(0);
    for(int i=1;i<=grades.size()-1;i++){
        if (max<grades.at(i)){
            max = grades.at(i);
        }
    }
    //
    cout<<"max "<<max<<endl;
    return max;

}

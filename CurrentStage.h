//
// Created by May Thu Htun on 07/04/2023.
//

#ifndef C___ADVENTURE_GAME_CURRENTSTAGE_H
#define C___ADVENTURE_GAME_CURRENTSTAGE_H
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Player.h"

// to deal with inventory file
class CurrentStage {
    // protected as this is a base class
protected:
    vector<Player> pv1;
public:
    void setVectorItem(Player p1);
    Player* getVector();
    void displayPlayerVector();
    void readCurrentStageFile();
    void writeToFile();
    Player* findName(string find);
};
#endif //C___ADVENTURE_GAME_CURRENTSTAGE_H

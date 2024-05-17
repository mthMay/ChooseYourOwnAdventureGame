//
// Created by May Thu Htun on 07/04/2023.
//

#ifndef C___ADVENTURE_GAME_SCENARIO_H
#define C___ADVENTURE_GAME_SCENARIO_H
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

// To read the lines from file to print the scenario and choice to users
class Scenario{
    int lineNo;
public:
    virtual void readScenarioFile(int l1);
};
#endif //C___ADVENTURE_GAME_SCENARIO_H

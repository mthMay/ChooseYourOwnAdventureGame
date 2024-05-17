//
// Created by May Thu Htun on 07/04/2023.
//

#ifndef C___ADVENTURE_GAME_CHOICES_H
#define C___ADVENTURE_GAME_CHOICES_H
#include "Scenario.h"
#include "Player.h"
#include "Enemy.h"
#include "CurrentStage.h"

// to perform reading of both files and setting values to the player as well as taking and changing values from the file
class Choices: public Scenario, public Player, public Enemy, public CurrentStage {
    int choice;
public:
    int checkLine(int l1);
    int checking (int l1);
};
#endif //C___ADVENTURE_GAME_CHOICES_H








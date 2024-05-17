//
// Created by May Thu Htun on 07/04/2023.
//

#ifndef C___ADVENTURE_GAME_PLAYER_H
#define C___ADVENTURE_GAME_PLAYER_H
#include "Character.h"
// class Player inherits class Character
class Player: public Character{
    // protected as this is a base class
protected:
    int healthPoint;
    int aidKit;
    int weapon;
    int food;
    int map;
    int stage;
public:
    Player();
    Player(string tempName, int tempHealthPoint, int tempStrength, int tempAidKit, int tempWeapon, int tempFood, int tempMap, int tempStage);
    int getHealthPoint();
    void setHealthPoint(int tempHealthPoint);
    int getAidKit();
    void setAidKit(int tempAidKit);
    int getWeapon();
    void setWeapon(int tempWeapon);
    int getFood();
    void setFood(int tempFood);
    int getMap();
    void setMap(int tempMap);
    int getStage();
    void setStage(int tempStage);
};
#endif //C___ADVENTURE_GAME_PLAYER_H

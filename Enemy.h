//
// Created by May Thu Htun on 07/04/2023.
//

#ifndef C___ADVENTURE_GAME_ENEMY_H
#define C___ADVENTURE_GAME_ENEMY_H
#include <cstdlib>
#include <iostream>
#include "Character.h"

// class Enemy inherits class Character
class Enemy: public Character{
    // protected as it is a base class
protected:
    int quantity;
public:
    Enemy();
    Enemy(string tempName, int tempStrength, int tempQuantity);
    int getQuantity();
    void setQuantity(int tempQuantity);
};
#endif //C___ADVENTURE_GAME_ENEMY_H

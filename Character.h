//
// Created by May Thu Htun on 07/04/2023.
//

#ifndef C___ADVENTURE_GAME_CHARACTER_H
#define C___ADVENTURE_GAME_CHARACTER_H
#include <string>
using namespace std;

// base class called character for player and enemy classes
class Character {
    // protected as the class is the base class
protected:
    string name;
    int strength;
public:
    Character();
    Character(string tempName, int tempStrength);
    string getName();
    void setName(string tempName);
    int getStrength();
    void setStrength(int tempStrength);
};
#endif //C___ADVENTURE_GAME_CHARACTER_H

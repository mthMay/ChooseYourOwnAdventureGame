//
// Created by May Thu Htun on 07/04/2023.
//
#include "Character.h"

Character::Character() {
}

Character::Character(string tempName, int tempStrength) {
name = tempName;
strength = tempStrength;
}
// to get the value stored in the name
string Character::getName() {
    return name;
}
// to set the value to the name
void Character::setName(string tempName) {
    name = tempName;
}
// to get the value stored in strength
int Character::getStrength() {
    return strength;
}
// to set the value to the strength
void Character::setStrength(int tempStrength) {
    strength = tempStrength;
}
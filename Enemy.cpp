//
// Created by May Thu Htun on 07/04/2023.
//
#include "Enemy.h"

Enemy::Enemy() {
}

Enemy::Enemy(string tempName, int tempStrength, int tempQuantity) {
name = tempName;
strength = tempStrength;
quantity = tempQuantity;
cout << "Name:" << name << endl;
cout << "Strength: " << strength << endl;
cout << "Number of them: " << quantity << endl;
}
// to generate random number of enemies
int Enemy::getQuantity() {
    // code modified from C++ Programming for the Absolute Beginner (Lee & Henkemans, 2009)
    // date accessed 16 February 2023
    srand(time(0));
    quantity = rand()% 6 + 1;
    return quantity;
}

void Enemy::setQuantity(int tempQuantity) {
    quantity = tempQuantity;
}
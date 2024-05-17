//
// Created by May Thu Htun on 07/04/2023.
//
#include "Player.h"

Player::Player() {
}

Player::Player(string tempName, int tempHealthPoint, int tempStrength, int tempAidKit, int tempWeapon, int tempFood, int tempMap, int tempStage) {
name = tempName;
healthPoint = tempHealthPoint;
strength = tempStrength;
aidKit = tempAidKit;
weapon = tempWeapon;
food = tempFood;
map = tempMap;
stage = tempStage;
}
// get the value stored in healthPoint
int Player::getHealthPoint() {
    return healthPoint;
}
// to set the value to be stored in healthPoint
void Player::setHealthPoint(int tempHealthPoint) {
    healthPoint = tempHealthPoint;
}
// to get the value stored in aidKit
int Player::getAidKit() {
    return aidKit;
}
// to set the value to be stored in aidKit
void Player::setAidKit(int tempAidKit) {
    aidKit = tempAidKit;
}
// to get the value stored in weapon
int Player::getWeapon() {
    return weapon;
}
// to set the value to be stored in weapon
void Player::setWeapon(int tempWeapon) {
    weapon = tempWeapon;
}
// to get the value stored in food
int Player::getFood() {
    return food;
}
// to set the value to be stored in food
void Player::setFood(int tempFood) {
    food = tempFood;
}
// to get the value stored in map
int Player::getMap() {
    return map;
}
// to set the value to be stored in map
void Player::setMap(int tempMap) {
    map = tempMap;
}
// to get the value stored in stage
int Player::getStage() {
    return stage;
}
// to set the value to be stored in stage
void Player::setStage(int tempStage) {
    stage = tempStage;
}
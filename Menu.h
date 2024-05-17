//
// Created by May Thu Htun on 07/04/2023.
//

#ifndef C___ADVENTURE_GAME_MENU_H
#define C___ADVENTURE_GAME_MENU_H
#include <iostream>
using namespace std;

// class of Menu to let the user choose the options to start or resume or exit the game.
class Menu {
    int choice;
public:
    int getChoice();
    void setChoice(int tempChoice);
    int mainMenu();
};
#endif //C___ADVENTURE_GAME_MENU_H

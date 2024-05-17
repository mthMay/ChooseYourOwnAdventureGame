//
// Created by May Thu Htun on 07/04/2023.
//
#include "Menu.h"

int Menu::getChoice() {
    return choice;
}

void Menu::setChoice(int tempChoice) {
    choice = tempChoice;
}
// to display the menu system of the game and let the user choose the option
int Menu::mainMenu() {
    int tempChoice;
    bool valid = false;
    while (valid == false) {
        try{
            cout << "Welcome to the adventure game! " << endl;
            cout << "Type 1 to start the game." << endl;
            cout << "Type 2 to resume the game." << endl;
            cout << "Type 3 to exit the game." << endl;
            cin >> tempChoice;

            if (cin.fail()){
                valid = false;
                throw runtime_error ("Value is not an integer.");
            }

            if (tempChoice < 1 || tempChoice > 3) {
                valid = false;
                throw domain_error ("Choice must be either 1, 2 or 3.");
            }

            else {
                valid = true;
            }
        }
        catch (exception& e) {
            cout << "Exception has been thrown. " << e.what() << endl;
            cin.clear();
            cin.ignore();
        }
    }
    setChoice (tempChoice);
    return getChoice();
}
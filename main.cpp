// This program is about 'choose your own' adventure game in which outcomes are different according to the user's choices
// Owner: May Thu Htun (T0333024)

#include "Menu.h"
#include "CurrentStage.h"
#include "Choices.h"
using namespace std;

int main() {
    int choice;
    Menu m;
    CurrentStage cs;
    Choices c;

    choice = m.mainMenu();
    if(choice == 1) {
        cs.readCurrentStageFile();
        Player* temp = cs.findName("Player");
        cout << "Welcome from the game." << endl;
        cout << endl;
        // setting the default value of the player
        temp->setHealthPoint(40);
        temp->setStrength(50);
        temp->setAidKit(0);
        temp->setWeapon(0);
        temp->setFood(0);
        temp->setMap(0);
        temp->setStage(1);
        cs.writeToFile();
        c.checkLine(1);
    }
    else if(choice == 2) {
        cs.readCurrentStageFile();
        Player* temp = cs.findName("Player");
        cout << "Welcome back, Player." << endl;
        cout << endl;
        // getting the current value of the player to resume the game
        temp->getHealthPoint();
        temp->getStrength();
        temp->getAidKit();
        temp->getWeapon();
        temp->getFood();
        temp->getMap();
        int line = temp->getStage();
        c.checkLine(line);
    }
    else if(choice == 3) {
        cout << "Bye. Please visit again." << endl;
        c.checkLine(22);
    }
    return 0;
}

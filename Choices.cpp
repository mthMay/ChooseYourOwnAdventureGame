//
// Created by May Thu Htun on 07/04/2023.
//
#include "Choices.h"
// to do exceptional handling on the user's input
int Choices::checking (int l1) {
    int c1;
    bool proceed = false;
    while (proceed == false) {
        try {
            Scenario:: readScenarioFile (l1);
            cin >> c1;

            if (cin.fail()) {
                proceed = false;
                throw runtime_error ("Value is not an integer.");
            }

            if (c1 < 1 || c1 > 4) {
                proceed = false;
                throw domain_error("Choice must be either 1, 2, 3 or 4.");
            }

            else {
                proceed = true;
            }
        }
        catch(exception& e){
            cout << "Exception has been thrown. " << e.what() << endl;
            cin.clear();
            cin.ignore();
        }
    }
    return c1;
}
// to read the scenario and to let the user choose the choice
int Choices::checkLine(int l1) {
    CurrentStage:: readCurrentStageFile();
    Player* temp = CurrentStage::findName("Player");
    if (l1 == 1) {
        do {
            choice = checking(l1);

            if(choice == 1) {
                l1 = 2;
            }
            else if(choice == 2) {
                l1 = 4;
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 1;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                l1 = 22;
            }
        }while(choice == 3);
    }

    if (l1 == 2) {
        do {
            choice = checking(l1);

            int ak = temp->getAidKit();
            int hp = temp->getHealthPoint();

            if (choice == 1) {
                temp->setAidKit(ak+1);
                temp->setHealthPoint(hp+30);
                CurrentStage:: writeToFile();
                l1 = 3;
            }
            else if(choice == 2) {
                l1 = 4;
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 2;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while(choice == 3);
    }

    if (l1 == 3) {
        do {
            choice = checking(l1);

            int w = temp->getWeapon();
            int s = temp->getStrength();
            if(choice == 1) {
                l1 = 4;
            }
            else if (choice == 2) {
                temp->setWeapon(w + 1);
                temp->setStrength(s + 10);
                CurrentStage:: writeToFile();
                l1 = 4;
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 3;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while(choice == 3);
    }

    if (l1 == 4) {
        do {
            Enemy("Small creatures", 10, Enemy:: getQuantity());
            int totalStrength = 10 * quantity;
            choice = checking(l1);

            int hp = temp->getHealthPoint();
            int s = temp->getStrength();
            if(choice == 1) {
                if(totalStrength >= s) {
                    if ((hp-40) < 10 ){
                        l1 = 15;
                    }
                    else{
                        temp->setHealthPoint(hp-40);
                        CurrentStage:: writeToFile();
                        l1 = 6;
                    }
                }
                else if(totalStrength < s) {
                    if ((hp-30) < 10 ){
                        l1 = 15;
                    }
                    else{
                        temp->setHealthPoint(hp-30);
                        CurrentStage:: writeToFile();
                        l1 = 5;
                    }
                }
            }
            else if (choice == 2) {
                if ((hp-0) < 10 ){
                    l1 = 15;
                }
                else{
                    temp->setHealthPoint(hp-20);
                    CurrentStage:: writeToFile();
                    l1 = 7;
                }
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 4;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while(choice == 3);
    }

    if (l1 == 5) {
        do {
            choice = checking(l1);

            int w = temp->getWeapon();
            int s = temp->getStrength();
            int m = temp->getMap();
            if(choice == 1) {
                temp->setWeapon(w+2);
                temp->setMap(m+1);
                temp->setStrength(s + 20);
                CurrentStage:: writeToFile();
                cout << "As you collected weapons, you gained more strength." << endl;
                l1 = 8;
            }
            else if (choice == 2) {
                temp->setMap(m+1);
                CurrentStage:: writeToFile();
                l1 = 8;
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 5;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while(choice == 3);
    }

    if (l1 == 6) {
        do {
            choice = checking(l1);

            int m = temp->getMap();
            if(choice == 1) {
                temp->setMap(m + 1);
                CurrentStage:: writeToFile();
                l1 = 8;
            }
            else if (choice == 2) {
                l1 = 8;
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 6;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while (choice == 3);
    }

    if (l1 == 7) {
        do{
            choice = checking(l1);

            int m = temp->getMap();
            if(choice == 1) {
                temp->setMap(m+1);
                CurrentStage:: writeToFile();
                l1 = 8;
            }
            else if (choice == 2) {
                l1 = 8;
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 7;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while(choice == 3);
    }

    if (l1 == 8) {
        do {
            choice = checking(l1);

            if(choice == 1) {
                l1 = 9;
            }
            else if(choice == 2) {
                l1 = 10;
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 8;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while(choice == 3);
    }

    if (l1 == 9) {
        do {
            Enemy("Apes", 20, Enemy:: getQuantity());
            int totalStrength = 20 * quantity;
            choice = checking(l1);

            int s = temp->getStrength();
            int f = temp->getFood();
            int hp = temp->getHealthPoint();
            if(choice == 1) {
                temp->setFood(f+1);
                temp->setHealthPoint(hp + 10);
                if(totalStrength >= s || hp < 50) {
                    if ((hp-30) < 10 ){
                        l1 = 15;
                    }
                    else{
                        temp->setHealthPoint(hp - 30);
                        CurrentStage:: writeToFile();
                        l1 = 14;
                    }
                }
                else if(totalStrength < s ) {
                    if ((hp-20) < 10 ){
                        l1 = 15;
                    }
                    else{
                        temp->setHealthPoint(hp - 20);
                        CurrentStage:: writeToFile();
                        l1 = 13;
                    }
                }
            }
            else if(choice == 2) {
                temp->setFood(f+1);
                temp->setHealthPoint(hp + 10);
                CurrentStage:: writeToFile();
                l1 = 12;
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 9;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while (choice == 3);
    }

    if(l1 == 10) {
        do {
            choice = checking(l1);

            int f = temp->getFood();
            int hp = temp->getHealthPoint();
            if(choice == 1) {
                temp->setFood(f + 1);
                CurrentStage:: writeToFile();
                l1 = 11;
            }
            else if(choice == 2) {
                if ((hp-10) < 10 ){
                    l1 = 15;
                }
                else{
                    temp->setHealthPoint(hp-10);
                    CurrentStage:: writeToFile();
                    l1 = 11;
                }
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 10;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while (choice == 3);
    }

    if(l1 == 11) {
        do {
            Enemy("Apes", 20, Enemy:: getQuantity());
            int totalStrength = 20 * quantity;
            choice = checking(l1);

            int s = temp->getStrength();
            int hp = temp->getHealthPoint();
            if(choice == 1) {
                l1 = 12;
            }
            else if(choice == 2) {
                if(totalStrength >= s || hp < 60) {
                    if ((hp-40) < 10 ){
                        l1 = 15;
                    }
                    else{
                        temp->setHealthPoint(hp-40);
                        CurrentStage:: writeToFile();
                        l1 = 14;
                    }
                }
                else if(totalStrength < s) {
                    if ((hp-30) < 10 ){
                        l1 = 15;
                    }
                    else{
                        temp->setHealthPoint(hp-30);
                        CurrentStage:: writeToFile();
                        l1 = 13;
                    }
                }
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 11;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while(choice == 3);
    }

    if(l1 == 12) {
        Scenario::readScenarioFile(l1);
        cout << "As you have died, you need to restart the game." << endl;
        l1 = 21;
    }

    if(l1 == 13) {
        do {
            choice = checking(l1);

            int m = temp->getMap();
            int w = temp->getWeapon();
            int s = temp->getStrength();
            if(choice == 1) {
                temp->setMap(m+1);
                temp->setWeapon(w+1);
                temp->setStrength(s + 10);
                CurrentStage:: writeToFile();
                if(temp->getMap() == 2) {
                    l1 = 16;
                }
                else if(temp->getMap() == 1) {
                    l1 = 19;
                }
            }
            else if(choice == 2) {
                temp->setMap(m+1);
                CurrentStage:: writeToFile();
                if(temp->getMap() == 2) {
                    l1 = 16;
                }
                else if(temp->getMap() == 1) {
                    l1 = 19;
                }
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 13;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while(choice == 3);
    }

    if(l1 == 14) {
        do {
            choice = checking(l1);

            int hp = temp->getHealthPoint();
            int m = temp->getMap();
            if(choice == 1) {
                temp->setStage(hp+10);
                CurrentStage:: writeToFile();
                if(m == 2) {
                    l1 = 16;
                }
                else if(m == 1) {
                    l1 = 19;
                }
                else if(m == 0) {
                    l1 = 20;
                }
            }
            else if (choice == 2) {
                l1 = 15;
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 14;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while (choice == 3);
    }

    if(l1 == 15) {
        Scenario::readScenarioFile(l1);
        cout << "As you have died, you need to restart the game." << endl;
        l1 = 21;
    }

    if(l1 == 16) {
        do {
            choice = checking(l1);

            if(choice == 1) {
                l1 = 17;
            }
            else if(choice == 2) {
                l1 = 18;
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 16;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while (choice == 3);
    }

    if(l1 == 19) {
        do {
            choice = checking(l1);

            if(choice == 1) {
                l1 = 17;
            }
            else if(choice == 2) {
                l1 = 18;
            }
            else if(choice == 3) {
                CurrentStage:: displayPlayerVector();
                l1 = 19;
            }
            else if(choice == 4) {
                temp->setStage(l1);
                CurrentStage:: writeToFile();
                l1 = 22;
            }
        }while(choice == 3);
    }

    if(l1 == 17) {
        Scenario:: readScenarioFile(l1);
        cout << "As you have won, you need to start the game." << endl;
        l1 = 21;
    }

    if(l1 == 18) {
        Scenario::readScenarioFile(l1);
        cout << "As you have died, you need to restart the game." << endl;
        l1 = 21;
    }


    if(l1 == 20) {
        Scenario::readScenarioFile(l1);
        cout << "As you have died, you need to restart the game." << endl;
        l1 = 21;
    }
    // set the default value as the user wins or loses the game
    if(l1 == 21) {
        temp->setHealthPoint(40);
        temp->setStrength(50);
        temp->setAidKit(0);
        temp->setWeapon(0);
        temp->setFood(0);
        temp->setMap(0);
        temp->setStage(1);
        CurrentStage::writeToFile();
        l1 = 22;
    }
    return l1;
}
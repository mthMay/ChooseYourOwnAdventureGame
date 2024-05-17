//
// Created by May Thu Htun on 07/04/2023.
//
#include "CurrentStage.h"
// to add values to the vector
void CurrentStage::setVectorItem(Player p1) {
    pv1.push_back((p1));
}

Player* CurrentStage::getVector() {
    return pv1.data(); // get memory location of the first item in the vector
}
// to print out the value stored in the vector
void CurrentStage::displayPlayerVector() {
    Player *p = getVector();
    for (int i = 0; i < 1; i++) {
        cout << "Name: " << p->getName() << endl;
        cout << "Health Point: " << p->getHealthPoint() << endl;
        cout << "Strength: " << p->getStrength() << endl;
        cout << "Aid Kit: " << p->getAidKit() << endl;
        cout << "Weapon: " << p->getWeapon() << endl;
        cout << "Food: " << p->getFood() << endl;
        cout << "Map: " << p->getMap() << endl;
        p->getStage();
        p++;
    }
}

// to read the current stage file
void CurrentStage::readCurrentStageFile() {
    string tempLine;
    string tempWord;
    string parseName;
    int parseHealthPoint;
    int parseStrength;
    int parseAidKit;
    int parseWeapon;
    int parseFood;
    int parseMap;
    int current;

    fstream fs;
    try{
        fs.open("../Files/inventory.txt");

        if (!fs.is_open()){
            throw runtime_error ("File does not exist.");
        }
    }
    catch(exception& e){
        cout << "Exception has been thrown. " << e.what();
    }

    while(getline(fs, tempLine)){ // read each line in a file and pass it into tempLine
        stringstream ss(tempLine);
        int counter = 0;
        while (getline(ss >> ws, tempWord, '/')) {// ignore white space, pass it into tempWord and last bit is the character that separate out the words
            if(counter == 0){
                parseName = tempWord;
            }
            if (counter == 1){
                parseHealthPoint = stoi(tempWord);
            }
            if (counter == 2){
                parseStrength = stoi(tempWord);
            }
            if (counter == 3){
                parseAidKit = stoi(tempWord);
            }
            if (counter == 4){
                parseWeapon = stoi(tempWord);
            }
            if (counter == 5){
                parseFood = stoi(tempWord);
            }
            if (counter == 6){
                parseMap = stoi(tempWord);
            }
            if (counter == 7){
                current = stoi(tempWord);
            }
            counter++;
        }

        Player* supes = new Player(parseName, parseHealthPoint, parseStrength, parseAidKit, parseWeapon, parseFood, parseMap, current);
        setVectorItem(*supes);
    }
    fs.close();
}

// to do some modification to the file
void CurrentStage::writeToFile(){
    Player* pointer = getVector();
    fstream writeFile;
    try{
        writeFile.open("../Files/inventory.txt");

        if (!writeFile.is_open()){
            throw runtime_error ("File does not exist.");
        }
    }
    catch(exception& e){
        cout << "Exception has been thrown. " << e.what();
    }

    for(int i = 0; i < 1; i++){
        writeFile << pointer->getName() << "/ " << pointer->getHealthPoint() << "/ " << pointer->getStrength() << "/ " << pointer->getAidKit() << "/ " << pointer->getWeapon() << "/ " << pointer->getFood() << "/ " << pointer->getMap() <<"/ " << pointer->getStage() << endl;
        pointer++;
    }
    writeFile.close();

}

// to find the data from the file
Player* CurrentStage::findName(string find){
    bool found = false;
    string record;
    Player* pRecord = getVector();
    for(auto i=pv1.begin(); i<pv1.end(); i++){
        if(pRecord->getName() == find){
            found = true;
            break;
        }
        pRecord++;
    }
    if(found == false){
        cout << " ";
    }
    return pRecord;
}
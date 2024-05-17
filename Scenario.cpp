//
// Created by May Thu Htun on 07/04/2023.
//
#include "Scenario.h"
// to read the scenario from the scenario file
void Scenario::readScenarioFile(int l1) {
    string tempLine;
    string tempWord;
    string des;
    string choice1;
    string choice2;
    string choice3;
    string choice4;
    int currentLine = 0;
    lineNo = l1;

    fstream fs;
    try{
        fs.open("../Files/scenario.txt");

        if(!fs.is_open()){
            throw runtime_error ("File does not exist.");
        }
    }
    catch(exception& e) {
        cout << "Exception has been thrown. " << e.what();
    }
    // code modified from https://www.youtube.com/watch?v=XajKINSkLII (Portfolio Courses, 2022)
    // date accessed 22 March 2023
    while(!fs.eof()){
        currentLine++;
        getline(fs, tempLine);
        if(currentLine == lineNo){
            stringstream ss(tempLine);
            int counter = 0;
            while (getline(ss >> ws, tempWord, '/')) {
                if(counter == 0) {
                    des = tempWord;
                    cout << des << endl;
                }
                if (counter == 1) {
                    choice1 = tempWord;
                    cout << choice1 << endl;
                }
                if (counter == 2) {
                    choice2 = tempWord; // check is digit and pass it to function in assignment
                    cout << choice2 << endl;
                }
                if (counter == 3) {
                    choice3 = tempWord; // check is digit and pass it to function in assignment
                    cout << choice3 << endl;
                }
                if (counter == 4) {
                    choice4 = tempWord; // check is digit and pass it to function in assignment
                    cout << choice4 << endl;
                }
                counter++;
            }
        }
    }
    fs.close();
}

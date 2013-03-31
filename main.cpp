#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

//Global Variables//

int playerLocation = 1;
int input = 0;
string name;
string gender;

void titleScreen () {
    system("cls");
    string title ="LOGAN & ZACH'S AWESOME ADVENTURE";
    cout << title << endl;
    cout << "1. New Game" << endl;
    cout << "2. Continue" <<endl;
    cout << "3. Quit" <<endl;

    cin >> input;
    return;
}

void charSetup () {
    system("cls");
    cout << "Welcome, the Adventure begins." << endl;
    cout << "What is your name?" << endl;
    cin.ignore();
    getline(cin, name);
    cout << name << ", woah." << endl;
    system("cls");
    cout << "I can't remember, are you a boy or girl?" << endl;
    cout << "1. Male" << endl;
    cout << "2. Female" << endl;
    cin >> input;
    getline(cin, gender);
    if (input == 1) {
        system("cls");
        cout << "You're a dude!" << endl;
        gender = "male";
    }
    else if(input == 2) {
        system("cls");
        cout << "Dang, girl, you got it going on!" << endl;
        gender = "female";
    }
    cout << "Press ENTER to continue...";
    cin.ignore();
    return;
}

void playGame () {
    while(playerLocation != 0) {int minutes = 30;
        bool dishesDone = false;
        bool floorClean = false;
        while(true){
                system("cls");
            cout << "What a nice house, " << name << "." << endl;
            if(dishesDone == false){
                cout << "The dishes are piled in the sink." << endl;
            } else {
                cout << "The dishes are done." << endl;
            }
            if(floorClean == false){
                cout << "The floor is covered in dog pee and poop." << endl;
            } else {
                cout << "The floors are clean and sparkling." << endl;
            }
            cout << "You only have " << minutes << " minutes till work." << endl;
            cout << "1. Do the dishes - 15 min" << endl;
            cout << "2. Clean floors - 15 min" << endl;
            cout << "3. Walk to work - 15 min" << endl;
            cin >> input;
            if(input == 1 && dishesDone == false){
                minutes -= 15;
                dishesDone = true;
            } else if(input == 2 && floorClean == false){
                minutes -= 15;
                floorClean = true;
            } else if(input == 3){
                minutes -= 15;
                break;
            } else {
            }}

        }
    return;
}

int main()
{
    titleScreen();



    if(input == 1) {
        charSetup();

    playGame();

    }
    else if(input == 2) {
        cout << "Let's get back to business.";
    } else{
        return 0;
    }
}

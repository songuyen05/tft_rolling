#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>
#include<time.h>
using namespace std;

int gold;
bool rollingOver = false;
int level = 2;
int levelxp = 0;

void Shop() {

srand(time(0));                                                     // Use current system time as seed value
// FIX -- increment between random number generated is constant
double prob = (rand() % 100) / 100.00;
cout << prob << endl;

}

void Rolling(){
    cout << "Please type B to reroll\n";
    cout << "Please type L to level up\n";
    while (gold > 1) {
        int input = getchar();
        if (input == 'B' || input == 'b') {                            // -2 gold for each time B is pressed
            gold -= 2;
            Shop();
            cout << "You have " << gold << " gold left\n";
        }
        else if(input == 'L' || input == 'l') {
            gold -= 4;
            levelxp += 4;
            cout << "You have " << gold << " gold left\n";
            if (levelxp >= 278) {
                level = 10;
                cout << "You are level " << level << endl;
            }
            else if (levelxp >= 194) {
                level = 9;
                cout << "You are level " << level << endl;
            }
            else if (levelxp >= 122) {
                level = 8;
                cout << "You are level " << level << endl;
            }
            else if (levelxp >= 74) {
                level = 7;
                cout << "You are level " << level << endl;
            }
            else if (levelxp >= 38) {
                level = 6;
                cout << "You are level " << level << endl;
            }
            else if (levelxp >= 18) {
                level = 5;
                cout << "You are level " << level << endl;
            }
            else if (levelxp >= 8) {
                level = 4;
                cout << "You are level " << level << endl;
            }
            else if (levelxp >= 2) {
                level = 3;
                cout << "You are level " << level << endl;
            }
        }
    rollingOver = true;
    }
}

int main() {

    while (!rollingOver) {
        cout << "Please enter amount of Gold you would like: ";
        while (!(std::cin >> gold)) {                                   // if input is not an integer
            cout << "\nPlease enter an integer: ";
            cin.clear();                                                // clear input
            cin.ignore(123, '\n');
        }
        Rolling();
    };
    return 0;
}
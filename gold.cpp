#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int gold;
bool rollingOver = false;

void rolling(){
    cout << "Please press B to reroll\n";
    while (gold > 1) {
        char input = getchar();
        if (input == 'B' || input == 'b') {
            gold -= 2;
            cout << "You have " << gold << " gold left\n";
        }

    }
    rollingOver = true;
}

int main() {

    while (!rollingOver) {
        cout << "Please enter amount of Gold you would like: ";
        while (!(std::cin >> gold)) {                         // if input is not an integer
            cout << "\nPlease enter an integer: ";
            cin.clear();                                   // clear input
            cin.ignore(123, '\n');
        }
        rolling();
    };
    return 0;
}
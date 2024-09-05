#include<iostream>
#include<sstream>
#include<limits>

class Currency {
    public:
        int amt_Gold;
        std::string reroll;
        int Gold(int a) {
            amt_Gold = a;
            std::cout << "I have " << amt_Gold << " gold to roll!\n";
            return amt_Gold;
        }

        void Reroll(int b) {
            amt_Gold = b;
            while (amt_Gold > 1) {
                if ((std::cin >> reroll) != "Reroll") {
                    std::cout << "\nPlease type Reroll: ";
                    std::cin.clear();
                    std::cin.ignore(123, '\n');
                }
                else {
                    amt_Gold -= 2;
                }
            std::cout << "You are out of money!" << std::endl;

            }
        }
};

int main() {
    Currency gold;
    std::cout << "Please enter amount of Gold you would like: ";
    int number = 0;
    while (!(std::cin >> number)) {                         // if input is not an integer
        std::cout << "\nPlease enter an integer: ";
        std::cin.clear();                                   // clear input
        std::cin.ignore(123, '\n');
    }
    number = gold.Gold(number);
    gold.Reroll(number);
    return 0;
};


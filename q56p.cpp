#include <iostream>
using namespace std;

class Game {
private:
    int playerChoice;
    int computerChoice;

public:
    void PlayerChoice() {
        cout << "Enter\n0 for Rock\n1 for Paper\n2 for Scissors: ";
        cin >> playerChoice;
    }

    void ComputerChoice() {
        cout << "Enter the computer choice: ";
        cin >> computerChoice;
    }

    void displayChoices() {
        cout << "You chose: " << playerChoice << endl;
        cout << "Computer chose: " << computerChoice << endl;
    }

    void Winner() {
        if (playerChoice == computerChoice) {
            cout << "Draw!" << endl;
        } else if ((playerChoice == 0 && computerChoice == 2) || 
                   (playerChoice == 1 && computerChoice == 0) || 
                   (playerChoice == 2 && computerChoice == 1)) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }
    }

    bool playAgain() {
        char choice;
        cout << "If you want to play again, press [s]: ";
        cin >> choice;
        return (choice == 's' || choice == 'S');
    }

    void play() {
        PlayerChoice();
        ComputerChoice();
        displayChoices();
        Winner();
    }
};

int main() {
    Game game;
    do {
        cout << "Rock, Paper, Scissors Game!" << endl;
        game.play();
    } while (game.playAgain());
    return 0;
}
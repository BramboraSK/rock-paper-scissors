#include <iostream>
#include <random>
#include <string>

using namespace std;

int main() {
    random_device rd;
    mt19937 mt(rd());

    string allowed = "RPS";
    uniform_real_distribution<double> dist(0, allowed.length());

    char choice;
    char computerChoice;

    while(true) {
        cout << "Rock paper scissors!\nEnter your choice (R/P/S or q to exit):";
        cin >> choice;

        computerChoice = allowed[int(dist(mt))];

        if(choice == 'q') {
            return 0;
        } else if(choice == computerChoice) {
            cout << "Tie!";
        } else if(choice == 'R') {
            if(computerChoice == 'P') {
                cout << "You lose!";
            } else {
                cout << "You win!";
            }
        } else if(choice == 'P') {
            if(computerChoice == 'S') {
                cout << "You lose!";
            } else {
                cout << "You win!";
            }
        } else if(choice == 'S') {
            if(computerChoice == 'R') {
                cout << "You lose!";
            } else {
                cout << "You win!";
            }
        } else {
            cout << "Invalid input!\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if(allowed.find(choice) != string::npos) {
            cout << " The computer chose " << computerChoice << "!\n\n";
        }
    }
}

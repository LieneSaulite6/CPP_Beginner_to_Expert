#include <iostream>
#include <cstdlib> // for system("cls")

using namespace std;

/*

Exercise 3.

Working on the program from the exercises 1 and 2 modify the code in order to let the user
place 'X' and 'O' signs (like in tick-tack-toe game). The signs should be placed in turns
(alternately, once X, once O to simulate two players playing).


eg.

    1     2     3



    4     5     6



    7     8     9


Player 1 inputted:
x: 2
y: 3

Output:

    1     2     3



    4     5     6



    7     X     9

Player 2 inputted:
x: 1
y: 1

Output:

    O     2     3



    4     5     6



    7     X     9

*/

const int ROWS = 3;
const int COLS = 3;

void printPlane(char plane[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout.width(4);
            cout << plane[i][j];
        }
        cout << endl;
    }
}

int main() {
    char plane[ROWS][COLS] = {{'1', '2', '3'},
                              {'4', '5', '6'},
                              {'7', '8', '9'}};

    int x, y;
    char currentPlayer = 'X';

    while (true) {
        // Print the current state of the plane
        printPlane(plane);

        // User input for x and y coordinates
        cout << "Player " << (currentPlayer == 'X' ? "1" : "2") << " inputted:\n";
        cout << "x: ";
        cin >> x;

        cout << "y: ";
        cin >> y;

        // Check if coordinates are valid
        if (x >= 1 && x <= ROWS && y >= 1 && y <= COLS && plane[x - 1][y - 1] != 'X' && plane[x - 1][y - 1] != 'O') {
            // Update the plane
            plane[x - 1][y - 1] = currentPlayer;

            // Switch to the other player
            currentPlayer = (currentPlayer == 'X' ? 'O' : 'X');

            // Clear the screen
            system("cls"); // For Windows, use "clear" for Linux/macOS
        } else {
            cout << "Invalid coordinates. Please enter values between 1 and 3, and choose an empty cell.\n";
        }
    }

    return 0;
}

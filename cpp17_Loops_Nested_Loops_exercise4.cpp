#include <iostream>
#include <cstdlib> // for system("cls")

using namespace std;

/*

Exercise 4.

Modify the program from the last three exercises in order to prevent situations where:
- values of x or y coordinates aren't in the interval <1;3>
- the inputted cell already has a 'X' or 'O' sign on it

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

bool isValidMove(char plane[ROWS][COLS], int x, int y) {
    // Check if coordinates are in the interval <1;3> and the cell is empty
    return (x >= 1 && x <= ROWS && y >= 1 && y <= COLS && plane[x - 1][y - 1] != 'X' && plane[x - 1][y - 1] != 'O');
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

        // Check if the move is valid
        if (isValidMove(plane, x, y)) {
            // Update the plane
            plane[x - 1][y - 1] = currentPlayer;

            // Switch to the other player
            currentPlayer = (currentPlayer == 'X' ? 'O' : 'X');

            // Clear the screen
            system("cls"); // For Windows, use "clear" for Linux/macOS
        } else {
            cout << "Invalid move. Please enter values between 1 and 3, and choose an empty cell.\n";
        }
    }

    return 0;
}

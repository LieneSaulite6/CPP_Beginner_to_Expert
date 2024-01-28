#include <iostream>
#include <cstdlib> // for system("cls")

using namespace std;

/*

Exercise 2.

Modify the program from exercise 1 so that the user can now place an 'X' sign on desired cell
of the plane. After printing out the 1 to 9 on the plane, the user is asked to input x and y
coordinate to put 'X'. The plane is printed again with the modified value on the inputted
coordinates. Using system("cls") clear the screen so there is only one plane printed in the console.
If you use mac check this topic: http://stackoverflow.com/questions/27616522/cannot-use-systemcls-in-xcode-in-mac
The program should work in an infinite loop so the user can fill whole plane with 'X'-s.

eg.

    1     2     3



    4     5     6



    7     8     9


The value from coordinate (1, 3) is 7 (array[2][0]).

User inputted:
x: 3
y: 3

Output:

    1     2     3



    4     5     6



    7     8     X


User inputted:
x: 2
y: 3

Output:

    1     2     3



    4     5     6



    7     X     X

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

    while (true) {
        // Print the original plane
        printPlane(plane);

        // User input for x and y coordinates
        cout << "Enter x coordinate (1-3): ";
        cin >> x;

        cout << "Enter y coordinate (1-3): ";
        cin >> y;

        // Check if coordinates are valid
        if (x >= 1 && x <= ROWS && y >= 1 && y <= COLS) {
            // Update the plane
            plane[x - 1][y - 1] = 'X';

            // Clear the screen
            system("cls"); // For Windows, use "clear" for Linux/macOS
        } else {
            cout << "Invalid coordinates. Please enter values between 1 and 3.\n";
        }
    }

    return 0;
}

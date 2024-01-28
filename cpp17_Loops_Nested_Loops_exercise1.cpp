#include <iostream>

using namespace std;

/*

Exercise 1.

Write a program that prints out in the console a simple representation of 3x3 plane. The plane
should be filled with numbers from 1 to 9 (stored in 3x3 array representing x,y coordinates of
the plane).



    1     2     3



    4     5     6



    7     8     9


The value from coordinate (1, 1) is 1 (array[0][0]).

*/

int main() {
    const int ROWS = 3;
    const int COLS = 3;

    int plane[ROWS][COLS] = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};

    // Print the 3x3 plane
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout.width(4); // To format spaces
            cout << plane[i][j];
        }
        cout << endl;
    }

    return 0;
}

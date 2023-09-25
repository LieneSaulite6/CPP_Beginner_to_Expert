#include <iostream>

using namespace std;

/*
Exercise 1.

Create a two dimensional 3x3 array of integers that holds some numbers of your choice (each array cell should be
initialised in program).

Write a program that asks the user to input x and y numbers (from 1 to 3). The program prints out
in the console the value that is stored in the array cell numbered by x, y coordinates.
Take into consideration that coordinates starts counting from ONE when array starts counting from ZERO.

eg.

User inputted:
x: 2
y: 2

Output:
cout << array[1][1];
*/

main ()
{
    int arr[3][3];
    int xCoordinate, yCoordinate;

    arr[0][0] = 5;
    arr[0][1] = 3;
    arr[0][2] = 2;
    arr[1][0] = 1;
    arr[1][1] = 4;
    arr[1][2] = 15;
    arr[2][0] = 123;
    arr[2][1] = 12;
    arr[2][2] = 42;

    cout << "Input x coordinate: ";
    cin >> xCoordinate;

    cout << "Input y coordinate: ";
    cin >> yCoordinate;

    cout << arr[xCoordinate-1][yCoordinate-1];
}

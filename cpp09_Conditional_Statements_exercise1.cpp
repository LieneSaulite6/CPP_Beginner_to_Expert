#include <iostream>

using namespace std;

/*
Exercise 1.

Basing on the knowledge about conditional statements, once again
modify the exercise from the lecture about logical and relational operators.
Write a program that asks the user to input three integer numbers.
The first two should represent the minimum and maximum value of the interval
respectively. Then the program should check if the third number is contained within the interval.
The user should be informed if the number belongs or if it doesn't belong to the interval.

eg.

User inputted:
Minimum value: 5
Maximum value: 9
Value to check: 2

Output:
The number 2 doesn't belong to the interval from 5 to 9.

eg.

User inputted:
Minimum value: 2
Maximum value: 5
Value to check 3

Output:
The number 3 belongs to the interval from 2 to 5.
*/

main ()
{
    int minValue, maxValue, valueToCheck;

    cout << "Enter minimum value: " << endl;
    cin >> minValue;
    cout << "Enter maximum value: " << endl;
    cin >> maxValue;
    cout << "Enter random value: " << endl;
    cin >> valueToCheck;

    if (valueToCheck > minValue && valueToCheck < maxValue)
        cout << "The number " << valueToCheck << " belongs to the interval from " << minValue << " to " << maxValue << "!" << endl;
    else
        cout << "The number " << valueToCheck << " doesn't belong to the interval from " << minValue << " to " << maxValue << "!" << endl;
}

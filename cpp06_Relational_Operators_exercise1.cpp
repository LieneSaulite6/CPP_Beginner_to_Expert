#include <iostream>

using namespace std;

/*
Exercise 1.

Write a program that asks the user to input three integer numbers. The first two should
represent the minimum and maximum value of the interval respectively. Then the program
should check if the third number is greater or equal to the minimum value and if it is
lower or equal to the maximum value. The result should be expressed with two sentences
and logical result using boolean type variable.

eg.

User inputted:
Minimum value: 2
Maximum value: 5
Value to check: 3

Output:
Is the value 3 greater or equal to min value ? 1 (True)
Is the value 3 lower or equal to max value ? 1 (True)
*/

main ()
{
    int minimumValue, maximumValue, valueToCheck;
    bool greaterOrEqual, lowerOrEqual;

    cout << "Enter minimum value of scale 1 - 5" << endl;
    cin >> minimumValue;
    cout << "Enter maximum value of scale 1 - 5" << endl;
    cin >> maximumValue;
    cout << "Enter a value between 1 - 5" << endl;
    cin >> valueToCheck;

    greaterOrEqual = ( valueToCheck >= minimumValue );
    lowerOrEqual = ( valueToCheck <= maximumValue );

    cout << "Is the value " << valueToCheck << " greater or equal to " << minimumValue << " ? " << greaterOrEqual << endl;
    cout << "Is the value " << valueToCheck << " lower or equal to " << maximumValue << " ? " << lowerOrEqual << endl;
}

#include <iostream>

using namespace std;

/*
Exercise 2.

Modify the Exercise 1 in order to prevent a situation where maximum value inputted is lower than the
minimum value. The user should see an error. And the program should stop.

eg.

User Inputted:
Minimum value: 3
Maximum value: 2

Output:
Error. Maximum value cannot be lower than the minimum value.
*/

main ()
{
    int minValue, maxValue, valueToCheck;

    cout << "Enter minimum value: " << endl;
    cin >> minValue;
    cout << "Enter maximum value: " << endl;
    cin >> maxValue;

    if (minValue < maxValue) {
        cout << "Enter random value: " << endl;
        cin >> valueToCheck;

        bool isContained = (valueToCheck > minValue && valueToCheck < maxValue);

        if (isContained)
            cout << "The number " << valueToCheck << " belongs to the interval from " << minValue << " to " << maxValue << "!" << endl;

        else
            cout << "The number " << valueToCheck << " doesn't belong to the interval from " << minValue << " to " << maxValue << "!" << endl;
    }

    else
       cout << "Error. Maximum value cannot be lower than the minimum value." << endl;
}

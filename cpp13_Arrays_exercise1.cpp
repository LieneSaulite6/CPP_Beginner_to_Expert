#include <iostream>

using namespace std;

/*
Exercise 1.

Write an application that asks the user to input four numbers. The inputted numbers should be stored in a 4 element array of doubles. The numbers should be
summarized and the result printed in the console as well as the address of first and last element of the array.

eg.

User inputted:
val 1 = 2
val 2 = 3
val 3 = 5
val 4 = 6

Output:

Result = 16
Address of first element = 0x69fed8
Address of last element = 0x69fef8
*/

main ()
{
    double val[4], sum = 0;
    cout << "Input first number: ";
    cin >> val[0];
    cout << "Input second number: ";
    cin >> val[1];
    cout << "Input third number: ";
    cin >> val[2];
    cout << "Input fourth number: ";
    cin >> val[3];

    sum = val[0] + val[1] + val[2] + val[3];

    cout << "The result of addition is: " << sum << endl;
    cout << "Address of first element: " << &val[0] << endl;
    cout << "Address of last element: " << &val[3] << endl;
}

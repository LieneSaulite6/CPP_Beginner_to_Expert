#include <iostream>

using namespace std;

/*

Exercise 1.

Write a program that asks the user to input a value of length expressed in inches, convert
it to centimeters and print in the console.

*/

main ()
{
    double length;
    cout << "Write your length in inches: " << endl;
    cin >> length;

    cout << "Your length is " << length * 2.54 << " in centimetres! :)" << endl;
}

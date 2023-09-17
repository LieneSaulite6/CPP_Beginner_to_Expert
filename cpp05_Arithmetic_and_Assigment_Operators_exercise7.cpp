#include <iostream>

using namespace std;

/*

Exercise 7.

Write a program that asks the user to input two numbers and calculates the remainder of their divison
(modulo). Print the result in the console.

*/

main ()
{
    int number1, number2, remainder;

    cout << "Enter number: " << endl;
    cin >> number1;

    cout << "Divide it with: " << endl;
    cin >> number2 ;

    remainder = number1 % number2;

    cout << "The remainder of this division is " << remainder << "! " << endl;
}

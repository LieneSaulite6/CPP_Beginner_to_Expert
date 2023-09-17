#include <iostream>

using namespace std;

/*

Exercise 5.

Write a program that asks the user to input two numbers and calculates their product (multiplication).
Print the result in the console.

*/

main ()
{
    double number1, number2, number3;

    cout << "Enter the number you want to multiply:" << endl;
    cin >> number1;

    cout << "How many times?" << endl;
    cin >> number2;

    number3 = number1 * number2;

    cout << "YOUR RESULT IS " << number3 << endl;
}

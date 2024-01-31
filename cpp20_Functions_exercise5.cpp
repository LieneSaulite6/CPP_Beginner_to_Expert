#include <iostream>
#include <cmath>

using namespace std;

/*

Exercise 5.

Write a function "exponentiation". When the function gets invoked - exponentiation(); - the user
is asked to input any two numbers: the base and the exponent (n-th power). The calculation is
printed out in the console.

*/

// Function declaration
void exponentiation();

int main() {
    // Invoke the exponentiation function
    exponentiation();

    return 0;
}

// Function definition
void exponentiation() {
    double base, exponent;

    // Get input from the user
    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate and print the result
    double result = pow(base, exponent);
    cout << "The result of raising " << base << " to the power of " << exponent << " is: " << result << endl;
}

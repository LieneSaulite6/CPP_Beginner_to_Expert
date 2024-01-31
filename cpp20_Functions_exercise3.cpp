#include <iostream>

using namespace std;

/*

Exercise 3.

Write a function "multiplication". When the function gets invoked - multiplication(); - the
user is asked to input any two numbers: the one to multiply and the one to multiply with.
The calculation is printed out in the console.

*/

// Function declaration
void multiplication();

int main() {
    // Invoke the multiplication function
    multiplication();

    return 0;
}

// Function definition
void multiplication() {
    double num1, num2;

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate and print the product
    double product = num1 * num2;
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
}

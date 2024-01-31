#include <iostream>

using namespace std;

/*

Exercise 1.

Write a function "addition". When the function gets invoked - addition(); - the user is
asked to input any two numbers which are added together. The calculation is printed out
in the console.

*/

// Function declaration
void addition();

int main() {
    // Invoke the addition function
    addition();

    return 0;
}

// Function definition
void addition() {
    double num1, num2;

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate and print the sum
    double sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
}

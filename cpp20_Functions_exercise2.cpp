#include <iostream>

using namespace std;

/*

Exercise 2.

Write a function "subtraction". When the function gets invoked - subtraction(); - the user
is asked to input any two numbers: the one to subtract from and the one to subtract with.
The calculation is printed out in the console.

*/

// Function declaration
void subtraction();

int main() {
    // Invoke the subtraction function
    subtraction();

    return 0;
}

// Function definition
void subtraction() {
    double num1, num2;

    // Get input from the user
    cout << "Enter the number to subtract from: ";
    cin >> num1;

    cout << "Enter the number to subtract with: ";
    cin >> num2;

    // Calculate and print the result
    double result = num1 - num2;
    cout << "The result of subtracting " << num2 << " from " << num1 << " is: " << result << endl;
}

#include <iostream>

using namespace std;

/*

Exercise 4.

Write a function "division". When the function gets invoked - division(); - the user is
asked to input any two numbers: the one to divide and the one to divide by. The calculation
is printed out in the console.

*/

// Function declaration
void division();

int main() {
    // Invoke the division function
    division();

    return 0;
}

// Function definition
void division() {
    double num1, num2;

    // Get input from the user
    cout << "Enter the number to divide: ";
    cin >> num1;

    cout << "Enter the number to divide by: ";
    cin >> num2;

    // Check if the divisor is not zero to avoid division by zero
    if (num2 != 0) {
        // Calculate and print the result
        double result = num1 / num2;
        cout << "The result of dividing " << num1 << " by " << num2 << " is: " << result << endl;
    } else {
        cout << "Error: Cannot divide by zero." << endl;
    }
}

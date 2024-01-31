#include <iostream>
#include <cmath>

using namespace std;

/*

Exercise 6.

Copy the functions and their declarations created in the exercises from 1 to 5 and write sixth
function "chooseOperation". The "chooseOperation" function should take one char parameter. The
body of the function should contain a switch for the choice parameter which depending on the
user input should invoke the corresponding mathematical functions from the exercises 1 to 5.

Write a simple calculator program that asks the user to choose a mathematical operation to perform
by inputting an operator symbol: '+' - addition, '-' - subtraction, '*' - multiplication,
'/' - division, '^' - exponentiation. The mathematical symbol is used as the parameter for
chooseOperation function. The calculator should work in an infinite loop.

eg.

User inputted:
+

Output:
The result of addition function

*/

// Function declarations
void addition();
void subtraction();
void multiplication();
void division();
void exponentiation();
void chooseOperation(char operation);

int main() {
    char choice;

    // Infinite loop for the calculator
    while (true) {
        // Ask the user to choose a mathematical operation
        cout << "Choose a mathematical operation: '+', '-', '*', '/', '^' (Enter 'Q' to quit): ";
        cin >> choice;

        // Check if the user wants to quit
        if (choice == 'Q' || choice == 'q') {
            cout << "Exiting the calculator program. Goodbye!" << endl;
            break; // Exit the loop if 'Q' or 'q' is entered
        }

        // Invoke the chooseOperation function with the user's choice
        chooseOperation(choice);
    }

    return 0;
}

// Function definitions
void addition() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "The sum is: " << (num1 + num2) << endl;
}

void subtraction() {
    // Function definition for subtraction (similar structure to other functions)
}

void multiplication() {
    // Function definition for multiplication
}

void division() {
    // Function definition for division
}

void exponentiation() {
    // Function definition for exponentiation
}

void chooseOperation(char operation) {
    switch (operation) {
        case '+':
            addition();
            break;
        case '-':
            subtraction();
            break;
        case '*':
            multiplication();
            break;
        case '/':
            division();
            break;
        case '^':
            exponentiation();
            break;
        default:
            cout << "Invalid operation. Please choose '+', '-', '*', '/', '^'." << endl;
    }
}

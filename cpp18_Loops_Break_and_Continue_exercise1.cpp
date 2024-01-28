#include <iostream>

using namespace std;

/*

Exercise 1.

Write a program that asks the user to input an integer number. Then the program calculates
the sum of all even numbers up to the number that the user inputted. Use continue instruction
to leave all odd numbers.

eg.

User inputted:
12

Output:
0 + 2 = 2
2 + 4 = 6
6 + 6 = 12
12 + 8 = 20
20 + 10 = 30
30 + 12 = 42

*/

int main() {
    int userInput;

    // Ask the user to input an integer number
    cout << "Enter an integer number: ";
    cin >> userInput;

    // Initialize sum variable
    int sum = 0;

    // Calculate the sum of even numbers up to the user-inputted number
    for (int i = 0; i <= userInput; i++) {
        // Skip odd numbers
        if (i % 2 != 0) {
            continue;
        }

        // Add even numbers to the sum
        sum += i;

        // Display the sum for each iteration
        if (i != 0) {
            cout << sum - i << " + " << i << " = " << sum << endl;
        }
    }

    return 0;
}

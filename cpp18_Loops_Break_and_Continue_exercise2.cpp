#include <iostream>
#include <cctype> // for tolower()

using namespace std;

/*

Exercise 2.

Write a program that shows the user current sum of numbers (starting with 0). Then it asks if
the user wants to add next number (raising by 1 in an infinite loop). If the user inputs Y or y
it adds the said number. If the user inputs N or n the number is skipped and gets incremented
by 1 (continue). If the user inputs anything else then Y/y or N/n the loop closes (break).

eg.

Output:
The current sum is: 0.
Do you want to add 1 ?

User inputted:
N/n

Output:
The current sum is: 0.
Do you want to add 2 ?

User inputted:
Y/y

Output:
The current sum is: 2.
Do you want to add 3 ?

*/

int main() {
    int currentSum = 0;
    int nextNumber = 1;
    char userInput;

    while (true) {
        // Display the current sum
        cout << "The current sum is: " << currentSum << "." << endl;
        cout << "Do you want to add " << nextNumber << " ?" << endl;

        // Get user input
        cout << "User inputted: ";
        cin >> userInput;

        // Convert the user input to lowercase for case-insensitive comparison
        userInput = tolower(userInput);

        // Check user input
        if (userInput == 'y') {
            // Add the next number to the current sum
            currentSum += nextNumber;
            nextNumber++; // Increment the next number
        } else if (userInput == 'n') {
            nextNumber++; // Increment the next number without adding to the sum
        } else {
            // Exit the loop for any input other than 'Y' or 'N'
            break;
        }
    }

    return 0;
}

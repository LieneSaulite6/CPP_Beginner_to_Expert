#include <iostream>

using namespace std;

/*

Exercise 1.

Write a program that asks the user to input a PIN code for the first time. Then using
the while (or do while) loop ask the user to input the PIN code again. If the PIN code is
wrong, the user should input it again (until the number is correct).

eg.

User inputted:
PIN: 3333
CHECKPIN: 3341

Output:
Input your pin:

eg.

User inputted:
PIN: 3412
CHECKPIN: 3412

Output:
Correct PIN !

*/

main ()
{
int pin, checkPin;

    // Input PIN for the first time
    std::cout << "Input your PIN: ";
    std::cin >> pin;

    // Use a while loop to check the PIN
    while (true) {
        std::cout << "Input your PIN again to check: ";
        std::cin >> checkPin;

        // Check if the entered PIN is correct
        if (pin == checkPin) {
            std::cout << "Correct PIN!\n";
            break; // Exit the loop if the PIN is correct
        } else {
            std::cout << "Incorrect PIN. Try again.\n";
        }
    }

    return 0;
}

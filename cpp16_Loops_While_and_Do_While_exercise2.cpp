#include <iostream>

using namespace std;

/*

Modify exercise 1 in order to stop the program if the PIN code was entered wrongly 5 times.
The user should be informed how many tries are left.

eg.

User inputted:
PIN: 3333
CHECKPIN: 3412

Output:
Input your pin (4 tries left):


User inputted:
PIN: 3333
CHECKPIN: (wrong number 5 times)

Output:
You have entered a wrong PIN code for 5 times !

*/

main ()
{
        const int MAX_ATTEMPTS = 5;
    int pin, checkPin;
    int attempts = 0;

    // Input PIN for the first time
    std::cout << "Input your PIN: ";
    std::cin >> pin;

    // Use a while loop to check the PIN with a limit of MAX_ATTEMPTS
    while (attempts < MAX_ATTEMPTS) {
        std::cout << "Input your PIN again to check (" << MAX_ATTEMPTS - attempts << " tries left): ";
        std::cin >> checkPin;

        // Check if the entered PIN is correct
        if (pin == checkPin) {
            std::cout << "Correct PIN!\n";
            break; // Exit the loop if the PIN is correct
        } else {
            std::cout << "Incorrect PIN. Try again.\n";
            attempts++;

            // Check if this is the last attempt
            if (attempts == MAX_ATTEMPTS) {
                std::cout << "You have entered a wrong PIN code for 5 times!\n";
                break; // Exit the loop if the maximum attempts are reached
            }
        }
    }

    return 0;
}

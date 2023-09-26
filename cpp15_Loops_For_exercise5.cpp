#include <iostream>

using namespace std;

/*

Exercise 5.

Write a program that asks the user to input an integer number. Then the program should print out
in the console the inputted number of asterisks (*). Furthermore, it should break the line (endl)
every 5 asterisks printed.

eg.

User inputted:
20

Output:
*****
*****
*****
*****

*/

main ()
{
    int numberOfAsterisks;

    cout << "How many asterisks would you like to draw: ";
    cin >> numberOfAsterisks;

    for (int i = 1; i <= numberOfAsterisks; i++)
    {
        cout << "*";
        if (i % 5 == 0)
        {
            cout <<  endl;
        }
    }
}

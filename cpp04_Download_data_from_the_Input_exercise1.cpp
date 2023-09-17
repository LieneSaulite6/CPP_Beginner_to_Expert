#include <iostream>

using namespace std;

/*

Exercise 1.

Write a program that asks the user to input three different line of text (3 strings) then using cout print the combination of the three in the console.

*/

main ()
{
    string city, food, drink;

    cout << "Enter your city: ";
    cin >> city;

    cout << "Enter your favorite food: ";
    cin >> food;

    cout << "Enter your favorite drink: ";
    cin >> drink;

    cout << city << " has the best " << food << "! Grab a " << drink << " and enjoy!";
}

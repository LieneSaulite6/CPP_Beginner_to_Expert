#include <iostream>

using namespace std;

/*

Exercise 3.

Write a program that asks the user to input two numbers and calculates their sum (addition).
Print the result on in the console.

*/

main ()
{
    int countries1, countries2, countries3;
    cout << "How many countries have you visited Europe?" << endl;
    cin >> countries1;

    cout << "How many countries have you visited outside Europe?" << endl;
    cin >> countries2;

    countries3 = countries1 + countries2;

    cout << "In total you have visited " << countries3 << " countries! :o";
}

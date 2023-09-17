#include <iostream>

using namespace std;

/*

Exercise 4.

Write a program that asks the user to input two numbers and calculates their difference (subtraction).
Print the result in the console.

*/

main ()
{
    int houses1, houses2, houses3;
    cout << "There are 45 houses in a street. 21 houses have been painted white. How many houses have not been painted?" << endl;

    cout << "Type how many houses are in total?" << endl;
    cin >> houses1;
    cout << "Type how many houses are white?" << endl;
    cin >> houses2;

    houses3 = houses1 - houses2;
    cout << "RESULT: " << houses3 << " houses have not been painted! :o" << endl;
}

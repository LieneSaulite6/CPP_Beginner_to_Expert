#include <iostream>

using namespace std;

/*

Exercise 3.

Write a program that asks the user to input any number (integer or floating point) and
the n-th power (integer) the number should be raised to. Then calculate the result of the
exponentiation of this number to the said power.

eg.

User inputted:
Number: 2
N-th power: 5

Output:
The number 2 to the power of 5 is equal to 32.

*/

main ()
{
    double number;
    double poweredNumber = 1;
    int nPower;

    cout << "Input the number: ";
    cin >> number;

    cout << "Raise to what power: ";
    cin >> nPower;

      for (int i = 0; i < nPower; i++)
    {
        poweredNumber *= number;
    }

    cout << "The number " << number << " to the power " << nPower << " is equal to " << poweredNumber << ". " << endl;
}


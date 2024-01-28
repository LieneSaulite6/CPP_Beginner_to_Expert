#include <iostream>

using namespace std;

/* Loops - exercises and nested loops */

main ()
{
    //Creating app that counts how many digits are in int nr
    int nr = 1234; // 4 digits
    int nrOfDigits = 1;

    cout << 1234 / 10 << endl;
    cout << 123 / 10 << endl;
    cout << 12 / 10 << endl;
    cout << 1 / 10 << endl;

    int tmp = nr;
    while (tmp /= 10) //check the condition tmp = ... if it is != 0, nrOfDigits ++
        nrOfDigits++;
    cout << "the number " << nr << " has " << nrOfDigits << " digits" << endl;

    /* Multiplication table */

    for (int i = 1; i <= 10; i++) //First line -> i = 1
    {
        for (int j = 1; j <= 10; j++) // j = 1
        {
            cout.width(4); //To format spaces
            cout << i * j;
        }
        cout << endl;
    }
}

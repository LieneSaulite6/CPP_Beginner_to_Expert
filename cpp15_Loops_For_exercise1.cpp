#include <iostream>

using namespace std;

/*

Exercise 1.

Write a program that asks the user to input an integer number. Then starting from that
number the program prints out in the console next 100 numbers.

eg.

User inputted:
11

Output:
12
13
14
15
...
...
111
*/

main()
{
    int startingNumber;

    cout << "Input the number you would like to start with: ";
    cin >> startingNumber;


    for (int i = 0; i < 100; i++)

    cout << ++startingNumber << endl;
}

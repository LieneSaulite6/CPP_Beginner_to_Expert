#include <iostream>

using namespace std;

/*

Exercise 2.

Using the console input write a program that asks the user to input two integer numbers. After that, swap (exchange) the values inputted and print them in the console.
For example if:
a = 5;
b = 10;
at the end of your program
a = 10;
b = 5;

*/

main ()
{
    int a, b, c;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

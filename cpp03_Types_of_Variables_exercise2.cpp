#include <iostream>

using namespace std;

/*

Exercise 2.

Initialize the variables from the first exercise with values of your own choice. Use cout (console output) to print out the values and their addresses in console (each should be on different line)

eg.
variable a;
(variable a value, address of variable a)
variable b;
(variable b value, address of variable b)

*/

main ()
{
    char a = '5';
    int b = 9;
    short c = 6;
    float d = 6.12;
    double e = 12.6;

    cout << a << endl;
    cout << &a << endl;

    cout << b << endl;
    cout << &b << endl;

    cout << c << endl;
    cout << &c << endl;

    cout << d << endl;
    cout << &d << endl;

    cout << e << endl;
    cout << &e << endl;
}

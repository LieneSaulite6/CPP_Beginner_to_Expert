#include <iostream>

using namespace std;
//relational operator

main ()
{
    int a = 10;
    int b = 5;

    cout << (a == b) << endl;    // returns TRUE when both are equal
    cout << (a != b) << endl;    // returns TRUE when both are different
    cout << (a > b) << endl;     // returns TRUE when a is greater than b
    cout << (a < b) << endl;     // returns TRUE when a is less than b
    cout << (a <= b) << endl;   // returns TRUE when a is lower than or equal to b
    cout << (a >= b) << endl;   // returns TRUE when a is greater than or equal to b

    cout << !(a != b) << endl;   // ! changes 1 to 0 and 0 to 1 // denial
}

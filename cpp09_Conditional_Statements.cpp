#include <iostream>

using namespace std;
//conditional statements / instructions

main ()
{
    int a = 4, b = 20;

    /*
    cout << "Enter a: " <<endl;
    cin >> a;

    cout << "Enter b: " << endl;
    cin >> b;

    if (a > b)
        cout << a << " > " << b << endl;
    */

    /*
    if (4 > 7)
    {
        cout << "something" << endl;
        cout << "test"; // {} will group all the instructions
    }

    if (12341234.51235)
        cout << "cond above is surely not equal to 0" << endl;

    if ((7 < 4 || 0 < 10) && (10 == 9))
        cout << "7 < 4 || 0 < 10" << endl;
    */

    if (a > b)
        cout << a << " > " << b << endl;
    else if (a < b)
    {
        cout << a << " < " << b << endl;
        if (a < 10)
            cout << "a is smaller than 10";
    }

    else
        cout << "the condition wasn't met" << endl;
}

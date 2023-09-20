#include <iostream>

using namespace std;

main ()
{
    /*
    0
    1
    0101 0110

    Decimal system (multiply * 10)
    126 = 1*10^2 + 2*10^1 + 6*10^1 // number 1, 2, 6 are counted to the formula: number * 10 ^ exponent

    Binary system (multiply *2)
    1010 = 1*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 8 + 2 = 10 // number * 2 ^ exponent

    101100 = 2 ^ 2 + 2 ^ 3 + 2 ^ 5 = 4 + 8 + 32 = 44
    */

    /*
        Bitwise AND - &
        Bitwise OR - |
        Bitwise NOT - ~ (tilde)
        Bitwise XOR ~ ^ (caret) exclusive OR
        0 0 0
        0 1 1
        1 0 1
        1 1 0
        Bitwise left shift <<
        Bitwise right shift >>
    */

    cout << (10 & 2) << endl;

    /*
        1 0 1 0
        0 0 1 0
        -------
        0 0 1 0 -> 2
    */

    cout << (10 | 2) << endl;

    /*
        1 0 1 0
        0 0 1 0
        -------
        1 0 1 0 -> 10
    */

    cout << (10 ^ 2) << endl;

    /*
        1 0 1 0
        0 0 1 0
        -------
        1 0 0 0 -> 8
    */

    cout << (~10) << endl;

    /*
        0000000000000000000000000 1 0 1 0
        1111111111111111111111111 0 1 0 1 -> -11 (negative, because first number is 1)
    */

    cout << (10 << 3) << endl; // this means that we are multiplying 10 by 2 raised to the power of 3 -> 80

    /*
        0000000000000000000000001 0 1 0 0
        20 - decimal notation
        40
    */

        cout << (10 >> 1) << endl; // this means that we are dividing 10 by 2 raised to the power of 1 -> 80

    /*
        0000000000000000000000000 0 1 0 1
        5
    */
}

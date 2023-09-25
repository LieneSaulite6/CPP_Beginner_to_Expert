#include <iostream>

using namespace std;

/* Loops

    for (initilization; condition; inc/dec)
        instruction-to-repeat;

*/
main ()
{
    /*
    for (int i = 0; i < 5; i++)
        cout << i << endl;

    cout << "hello" << endl;
    */

    int array[100];

    for (int i = 0; i < 100; i++)
    {
        array[i] = i;
        cout << array[i] <<endl;
    }

    /*
    Infinite loop

    for (;;)
        cout << "hello" << endl;
    */
}

#include <iostream>

using namespace std;

main()
{
    /* int i = 0;

    while(i++ < 10)
      cout << "i has size:" << i << endl;

    OR

    while(i < 10)

    {
    cout << "i has size:" << i << endl;
    i++;
    }

    */

    const int sizeOfArray = 10;
    int i = 0;
    int array [sizeOfArray];

    while (i < sizeOfArray) //i = 0
    {
        array[i] = 10 * i;
        cout << array[i++] << endl;
    }

    /*

    The do/while loop is a variant of the while loop.
    This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

    int i = 0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);

    */
}

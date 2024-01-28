#include <iostream>

using namespace std;

/* Loops - break and continue */

main ()
{
    /* Multiplication table */

    /*
    for (int i = 1; i <= 10; i++) //amount of rows, length of column
    {
        /*
        if (i == 5)
            continue; //EVERYTHING AFTER continue instruction WON'T BE executed, but loop WON'T END because of it.
        */

        /*
        if (i == 5)
            break; //EVERYTHINH AFTER break won't be executed AND we are LEAVING the ACTUAL loop.
        */

        /*
        for (int j = 1; j <= 10; j++) //amount of columns, length of rows
        {
            if (j == 5)
                continue;
            cout.width(4);
            cout << i * j;
        }
        cout << endl;
    }

    cout << "lalala" ;
    */

    for (int i = 1, j = 1; i <= 10; i++)
    {
        cout.width(4);
        cout << i * j;

        if (i == 10)
        {
            j++;
            i = 0;
            cout << endl;
        }

        if (j == 10 + 1)
            break;
    }
}

#include <iostream>

using namespace std;
//an ARRAY is a series of the same type, they are placed in memory that way that there are no other things stored between array's values.

main ()
{
    int a;

    //int a, b, c, d, e, f, g, h, i, j;

    //int var1, var2, var3, var4, var5...

    int array[4]; //type name [ size_nr_of_elements ];

    array[0] = 10;
    array[1] = 50;
    array[2] = 256;
    array[3] = 512;

    cout << "array [0] = " << array[0] << ", address: " << &array[0] << endl;
    cout << "array [1] = " << array[1] << ", address: " << &array[1] << endl;
    cout << "array [2] = " << array[2] << ", address: " << &array[2] << endl;
    cout << "array [3] = " << array[3] << ", address: " << &array[3] << endl;
}

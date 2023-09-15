#include <iostream>

using namespace std;

/* Variables are containers for storing data values.


int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)

*/

main ()
{
    int A = 6;
    //A = 6;
    //& (ampersand - memory address of a variable)
    //&name_of_variable;

    cout << A << endl;
    cout << &A << endl;

    A = 9;

    cout << A << endl;
    cout << &A;

    //In the result A = 9, but memory address of the variable is the same 0x61ff0c
}

/*

1. Variables can't have the same name.
2. Variable name can't start with a number.
3. Variables can't contain spaces.
4. Variable name should be self-descriptive.
5. Variable name can't be constructed of special characters or keywords.
6. Variables should be nouns.

*/

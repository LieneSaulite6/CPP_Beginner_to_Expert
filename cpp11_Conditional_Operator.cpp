#include <iostream>

using namespace std;

/*
Rule of creating conditional statement:

Enter the name of the variable to which you will assign the result
Create a condition
? means if the condition is True then follow this instruction
: otherwise do what is after the colon: instruction two;

string name = a > b ? ""a is greater than b"" : "a is less than or equal to b";
*/

main ()
{
    int a = 5;
    int b = 10;

    string name = a > b ? "a is greater than b" : "a is less than or equal to b" ;

    cout << name << endl;
    system("pause");
}

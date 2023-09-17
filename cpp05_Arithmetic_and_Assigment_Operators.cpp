#include <iostream>

using namespace std;
//operators


main ()
{
    int a = 10;
    int b = 4;

    cout << a + b << endl; //addition  operation
    cout << a - b << endl; //substraction operation
    cout << a * b << endl; //multiplication
    cout << a / b << endl; //division
    //for precision it is better to use float or double, because int can't generate results with comma.

    //10 % 4 = 2 -> remainder -> 10 - 8 = 2
    //1 % 5 = 1 -> 5 can be located 0 times in 0, so 0 * 5 = 0 -> 1 - 0 = 1

    cout << a % b << endl;

    //incrementation - increase by 1
    //decrementation - decrease by 1

    int c = 1;

    cout << c++ << endl; //++ is an increment operator -> c++ (POST) will output 1, ++c (PRE) will output 2
    cout << c << endl;

    int d = 1;

    cout << --d << endl; //PREdecremenation --d will output 0, POSTdecrementation d-- will output 1
    cout << d << endl;
}

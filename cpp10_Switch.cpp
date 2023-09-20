#include <iostream>

using namespace std;
//switch(variable to be switched between cases)

main ()
{
    int a = 50; //for Switch we can only use int and char (type of int characters from 0 to 127 (ASCII -> 'k' == 107 )

    switch(a)
    {
        case 0:    // for a == 0
           cout << "a is equal to 0" << endl;
        case 25:
           cout << "a is equal to 25" << endl;
        case 50:
           cout << "a is equal to 50" << endl;
           break; //not to print out all instructions that have 50

        default:  //default will be called when all the above cases are false
           cout << "and it certainly isn't equal to 0, 25, 50" << endl;
      }
}

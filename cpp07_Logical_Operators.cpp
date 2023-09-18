#include <iostream>

using namespace std;

main()
{
    /*
    AND conjunction &&
    7 > 5 && 5 != 10 // conjunction is true ONLY if both expressions are true

    expr1    expr2    result
        0       0       0
        0       1       0
        1       0       0
        1       1       1
    */

    cout << ( 7 > 5 && 5 != 10 ) << endl;

    /*
    OR disjunction || (alternative) // is true if AT LEAST one of expressions is true

    expr1    expr2    result
        0       1       1
        1       0       1
        1       1       1
        0       0       0
    */

    cout << ( 7 > 5 || 5 != 10 ) << endl;

    /*
    (!) (exclemation mark) negation operator, changes values (NOT)

    ! (0) the result will be 1
    ! (1) the result will be 0

    */

    cout << !( 7 > 5 || 5 != 10 ) << endl;
}

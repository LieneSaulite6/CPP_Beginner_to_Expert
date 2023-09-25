#include <iostream>

using namespace std;

/*

Exercise 2.

Write a program that prints out in the console all upper case and lower case letters from
the alphabet (A-Z).

eg.

Output:
A a B b C c D d E e F f G g H h I i J j K k L l M m N n O o P p Q q R r S s T t U u V v W w X x Y y Z z

*/

main ()
{
    char lowerCaseLetter = 'a';
    char upperCaseLetter = 'A';

    for (int i = 0; i <= ('Z'-'A'); i++) //A has a value 65 in ASCII table, B has 66, C has 67 and so on. Z has a value 90 so the loop iterates 25 times in order to sort through the alphabet
    {
        cout << upperCaseLetter << " ";
        cout << lowerCaseLetter << " ";

        lowerCaseLetter++;
        upperCaseLetter++;
    }
}

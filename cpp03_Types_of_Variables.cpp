#include <iostream>

using namespace std;

main ()
{
    //TYPE_OF_VARIABLE nameOfVariable;
    //TYPE_OF_VARIABLE nameOfVariable1, nameOfVariable2, nameOfVariable3;

    int a = 40, b = 0, c = 20; //-2 billions to 2 billions, 4 bytes

    cout << "a : " << a << " address: " << &a << endl;
    cout << "b : " << b << " address: " << &b << endl;
    cout << "c : " << c << " address: " << &c << endl;

    short int t1 = 5; //-3276 to 32767, 2 bytes
    cout << t1 << endl;

    //for unsigned short int, 0 to 65535 (when we don't need negative numbers)

    unsigned short int t7 = 3700;
    cout << t7 << endl;

    //if we want to use numeral like 5.12 we need to define floating (or double) variable

    float t2 = 5.12; //4 bytes - nr that are up to 38 zeros
    double t3 = 5.12; //8 bytes - nr that are up to 308 zeros (after the point like 5.122587263587256), good for precision of calculations

    cout << t2 << endl;
    cout << t3 << endl;

    char t4; //character

    t4= 'a';
    cout << t4 << endl;

    string t5 = "Hello World! :)"; // to store many characters at once (text) , should be in " "
    cout << t5 << endl;

    //how to combine strings

    string x = "part1";
    string y = "part2";
    string combineStrings = x + " " + y;

    cout << combineStrings << endl;

    //boolean | true (1) or false (0)

    bool t6 = 0;

    cout << t6 << endl;

    /*
    t6 = true; -> 1
    t6 = false; -> 0
    t6 = 123123; -> 1
    t6 = -12354; -> 0
    t6 = 0; -> 0
    */

    const string NAMEOFGAME = "Conqueror of C++"; // constant variable we can't change or add anything later

    cout << NAMEOFGAME << endl;

    //NAMEOFGAME = "something"; will be error
}



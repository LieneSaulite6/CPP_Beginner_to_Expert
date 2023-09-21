#include <iostream>

using namespace std;

/*
Exercise 1.

Write an application that asks the user to input his age. Then using the conditional
operator (ternary operator) check if the user age is higher or equal to 18.

eg.

User inputted:
14

Output:
Your are not an adult !
*/

main ()
{
    int age;
    cout << "Please input your age: ";
    cin >> age;

    string isAdult = (age >= 18)
        ? "You are an adult!"
        : "You are not an adult!";

    cout << isAdult;
}


#include <iostream>

using namespace std;

/*
Write a program immitating a vending machine. The program should present the user
with a choice of 6 products of your choice (Coke, Water, Chocolate Bar etc). Then allow
the user to choose a product by entering a number 1-6. Add an exception for invalid input
if the user inputs a number which doesn't correspond to any choice.

eg.

1. Cola
2. Chocolate Bar
3. ...
4. ...
5. ...
6. ...

User inputted:
Choice: 2

Output:
Your have chosen a Chocolate Bar.

eg.

User inputted:
Choice: 7

Output:
Error. Invalid choice.
*/

main ()
{
    int itemOfChoice;

    cout << "1. Cola" << endl;
    cout << "2. Chocolate Bar" << endl;
    cout << "3. Granola Bar" << endl;
    cout << "4. Bottled Water" << endl;
    cout << "5. Chips" << endl;
    cout << "6. Candies" << endl;
    cout << "Enter your choice: ";

    cin >> itemOfChoice;

    if (itemOfChoice == 1)
        cout << "Your have chosen a Cola." << endl;
    else if (itemOfChoice == 2)
        cout << "Your have chosen a Chocolate Bar." << endl;
    else if (itemOfChoice == 3)
        cout << "Your have chosen a Granola Bar." << endl;
    else if (itemOfChoice == 4)
        cout << "Your have chosen a Bottled Water." << endl;
    else if (itemOfChoice == 5)
        cout << "Your have chosen a Chips." << endl;
    else if (itemOfChoice == 6)
        cout << "Your have chosen a Candies." << endl;

    else
        cout << "Error. Invalid choice." << endl;
}

#include <iostream>

using namespace std;

/*
Exercise 2.

Write a program that lists the months (January to December) from 1 to 12.It should ask the
user to input the number of the month. Then using switch the program answers how many days
there are in that month. In case of February, the user has to input the year (in order to
check leap year). Keep the code as short as possible !

The conditions to satisfy a leap year:

The year must be divisible by 4.
If the year is divisible by 100, then it is not a leap year.
EXCEPT if the year is divisible by 400, then it is a leap year.

eg.

User inputted:
1

Output:
This month has 31 days.

eg.

User inputted:
2

Output:
In which year ?

User Inputted:
2000

Output:
The month is February and it has 29 days in year 2000
*/

main ()
{
    int monthOfChoice;

    cout << "1. January" << endl;
    cout << "2. February" << endl;
    cout << "3. March" << endl;
    cout << "4. April" << endl;
    cout << "5. May" << endl;
    cout << "6. June" << endl;
    cout << "7. July" << endl;
    cout << "8. August" << endl;
    cout << "9. September" << endl;
    cout << "10. October" << endl;
    cout << "11. November" << endl;
    cout << "12. December" << endl;
    cout << "Enter your choice: ";

    cin >> monthOfChoice;

    switch (monthOfChoice)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "This month has 31 days." << endl;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "This month has 30 days." << endl;
            break;
        case 2:
        {
            int year;
            cout << "In which year?" << endl;
            cin >> year;

            bool isLeapYear = (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0));

            if (isLeapYear)
                cout << "The month February has 29 days in year " << year << endl;
            else
                cout << "The month February has 28 days in year " << year << endl;
        }
		break;
        default:
            cout << "ERROR. Invalid choice.";
    }
}

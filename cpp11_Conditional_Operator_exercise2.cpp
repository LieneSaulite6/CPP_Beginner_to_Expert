#include <iostream>

using namespace std;

/*
Exercise 2.

Write an application that asks the user to input the points he achieved on an exam.
If the number of points was higher than 50 the user should be notified that he/she passed
the exam - use the conditional operator. The number of points which a student was able to
achieve from the exam was from 0 - 100 hence, if the user inputs a number which doesn't
belong to this interval the output should be an error message.

eg.

User inputted:
30

Output:
You didn't pass the exam !

eg.

User inputted:
101

Output:
ERROR. The number of points is invalid !
*/

main ()
{
    int points, examPoints;
    cout << "How many points have you achieved?" << endl;
    cin >> points;

    if ((points >= 0) && (points <= 100))
    {
        string examPoints = (points >= 50)
            ? "You have passed!"
            : "You didn't pass the exam!";

        cout << examPoints;
    }
    else

        cout << "ERROR. The number of points is invalid!";
}

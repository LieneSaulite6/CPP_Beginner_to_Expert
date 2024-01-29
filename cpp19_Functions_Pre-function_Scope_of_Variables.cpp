#include <iostream>

using namespace std;
/*scope /range of variables */

int globalVariable;

main ()
{
    /*
    int localVariable;

    cout << "value of globalVariable: " << globalVariable << endl;
    cout << "value of localVariable: " << localVariable << endl; //will work as it is in {}.

    if (a == 10)
    {
        int result = a * 10;
    }

    cout << result << endl; //will not work, because result is not in {}, should be assign.
    */

    int nr, result = 0;
    int i = 0;
    for (; i < 3; i++)// 3,2,3 - will result be 8? Yes, if it is assigned as 0.
    {
        cout << "Enter " << (i + 1) << " number" << endl;
        cin >> nr;
        result += nr; //result = result + nr
    }

    cout << result << endl;
    cout << "we added " << i << " numbers" << endl;
}

#include <iostream>

/*

Exercise 1 .

Below, you will find a simple piece of code, however something got messed up and the program is not compiling. Furthermore, the comments provided are misguiding.

Correct the code and provide proper commentary for this simple program:

#include <iostream> //This console output is supposed to show the result of 2+2 equation

In this code we are going to use cout which is a member of the iostream library std namespace.
We can access the cout in 3 different ways.
1. using namespace std;
This way you have access to whole std namespace throughout your code.
2. using std::cout;
This way you have access only to cout throughout your code.
3. std::cout
This way you are accessing the cout only at the line it is used on.

main()
{
	cout << "The evaluation of 2+2 is equal to 4";
	//In the line above we are attaching iostream (standard input/output) 	library which is necessary for using cout (console output)
}

*/

using namespace std;

main()
{
	cout << "The evaluation of 2+2 is equal to 4";
}

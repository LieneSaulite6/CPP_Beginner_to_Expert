#include <iostream>

using namespace std;

/*

Exercise 2.

Write a program that asks the user to input a temperature in celsius degrees. The result
should be the temperature expressed in Fahrenheit and Kelvin scales. Find the conversion
formulas on the web.

*/

main ()
{
    double temperature, temperature1, temperature2;
    cout << "Write today's temperature in Celsius: " << endl;
    cin >> temperature;

    //Fahrenheit formula
    temperature1 = ( temperature * 9/5 ) + 32;

    //Kelvin formula
    temperature2 = temperature + 273.15;

    cout << "Today's temperature is " << temperature1 << " in Fahrenheit and " << temperature2 << " in Kelvin! :)";
}

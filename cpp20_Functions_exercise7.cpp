#include <iostream>

using namespace std;

/*

Exercise 7.

Write a program that asks the user to input 5 floating point numbers (stored in a 5 element
array of doubles). Write two functions "minValue" and "maxValue" that take into argument
an array of doubles and returns a double. "minValue" should return the minimum value of the array
and "maxValue" should return the maximum value of the array.

eg.

User inputted:
3
2.31
2.32
17
19

Output:
The minimum value was: 2.31 - minValue(array)
The maximum value was:   19 - maxValue(array)

*/

// Function declarations
double minValue(const double array[], int size);
double maxValue(const double array[], int size);

int main() {
    const int SIZE = 5;
    double numbers[SIZE];

    // Get input from the user and populate the array
    cout << "Enter 5 floating-point numbers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Display the minimum and maximum values using the functions
    cout << "The minimum value was: " << minValue(numbers, SIZE) << endl;
    cout << "The maximum value was: " << maxValue(numbers, SIZE) << endl;

    return 0;
}

// Function definitions
double minValue(const double array[], int size) {
    // Initialize min with the first element of the array
    double min = array[0];

    // Iterate through the array to find the minimum value
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    return min;
}

double maxValue(const double array[], int size) {
    // Initialize max with the first element of the array
    double max = array[0];

    // Iterate through the array to find the maximum value
    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

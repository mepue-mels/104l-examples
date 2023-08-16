#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    cout << fixed << showpoint << setprecision(2);
    int radius;
    int *radiusPointer = &radius;

    cout << "This program calculates the circumference of a circle using pointers" << endl;

    cout << "Enter the radius: ";
    cin >> *radiusPointer;
    cout << endl;

    cout << "The circumference of the circle is: " << 2 * 3.141 * *radiusPointer;
}
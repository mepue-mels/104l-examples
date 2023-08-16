#include <iostream>
using namespace std;

int main(void) {
    int *intList;   
    int *buf;
    int arraySize;

    cout << "Enter your array size: ";
    cin >> arraySize;
    cout << endl; 

    intList = new int[arraySize];

    buf = intList;

    *buf = 52;

    cout << *buf;
}
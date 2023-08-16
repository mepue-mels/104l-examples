#include <iostream>
using namespace std;

int main(void) {
    int *p;

    p = new int;
    *p = 25;

    cout << *p;
}
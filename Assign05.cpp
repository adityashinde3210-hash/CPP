#include <iostream>
using namespace std;

int main() {
    int a = 15, b = 25;
    int *p = &a, *q = &b;

    if (*p > *q)
        cout << "Larger = " << *p;
    else
        cout << "Larger = " << *q;

    return 0;
}

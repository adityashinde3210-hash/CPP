#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;

    cout << "Square = " << (*p) * (*p);

    return 0;
}

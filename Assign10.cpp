#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;

    cout << "Value of a = " << a << endl;
    cout << "Using pointer = " << *p << endl;
    cout << "Using pointer to pointer = " << **q << endl;

    return 0;
}

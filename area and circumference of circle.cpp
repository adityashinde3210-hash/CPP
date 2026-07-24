#include <iostream>
using namespace std;

int main() {
    float radius;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Area = " << 3.14 * radius * radius << endl;
    cout << "Circumference = " << 2 * 3.14 * radius;

    return 0;
}
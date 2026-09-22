
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 50, 20, 40, 30};
    int *p = arr;
    int largest = *p;

    for (int i = 1; i < 5; i++) {
        p++;
        if (*p > largest)
            largest = *p;
    }

    cout << "Largest = " << largest;

    return 0;
}

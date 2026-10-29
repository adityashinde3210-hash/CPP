#include <iostream>
using namespace std;

class Area
{
public:

  
    int calculate(int side)
    {
        return side * side;
    }

 
    int calculate(int length, int width)
    {
        return length * width;
    }

 
    float calculate(float radius)
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Area a;

    cout << "Area of Square = " << a.calculate(5) << endl;
    cout << "Area of Rectangle = " << a.calculate(10, 5) << endl;
    cout << "Area of Circle = " << a.calculate(3.0f) << endl;

    return 0;
}

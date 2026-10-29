#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void area() override
    {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

class Square : public Shape
{
private:
    float side;

public:
    Square(float s)
    {
        side = s;
    }

    void area() override
    {
        cout << "Area of Square = " << side * side << endl;
    }
};

int main()
{
    Circle c(10);
    Rectangle r(15, 4);
    Square s(8);

    c.area();
    r.area();
    s.area();

    return 0;
}

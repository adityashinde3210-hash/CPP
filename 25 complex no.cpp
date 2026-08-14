#include <iostream>
using namespace std;

class Complex
{
private:
float real, imag;

public:
void input()
{
cout << "Enter real and imaginary parts:";
cin >> real >> imag;

}

Complex add(Complex c)
{
Complex result;
result.real = real + c.real;
result.real = imag + c.imag;
return result;
}

Complex subtract(Complex c)
{
Complex result;
result.real = real - c.real;
result.imag = imag - c.imag;
return result;
}
void display()
{
cout << real << " + " << imag << "i" << endl;
}
};

int main()
{
Complex c1, c2, sum, difference;

c1.input();
c2.input();

sum = c1.add(c2);
difference = c1.subtract(c2);

cout << "Addition:";
sum.display();

cout << "Subtraction:";
difference.display();

return 0;
}

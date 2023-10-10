// constructor overloading

#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex(int x, int y) // parameterized constructor
    {
        a = x;
        b = y;
    }
    Complex(int k) // parameterized constructor
    {
        a = k;
    }
    Complex() // default constructor
    {
    }
    Complex(Complex &c) // reference variable ---> copy constructor
    {
        a = c.a;
        b = c.b;
    }
};

int main()
{
    Complex c1(3, 4), c2(5), c3;
    Complex c4(c1); // or c4=c1;
    return 0;
}
//binary operator

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void print()
    {
        cout << real << "+" << img << "i" << endl;
    }

    // operator overloading syntax
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main()
{
    Complex c1(5, 4);
    Complex c2(2, 5);
    Complex c3(1, 1);
    Complex c4;
    c4 = c1 + c2 + c3; // right to left priority (caller object left vala operand he hoga)
    // c1 + c2       c1.add(c2) 
    c4.print();
    // int y=4;
    // int z=x+y;
    // int x=5;
    // cout<<"z value : "<<z<<endl;

    return 0;
}
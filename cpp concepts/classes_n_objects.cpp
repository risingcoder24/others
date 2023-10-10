// class and object in cpp
//function call by passing object and returning object

#include <iostream>
using namespace std;

class Complex
{
private:
  int a, b;

public:
  void set_data(int, int);

  void show_data()
  {
    cout << "\n"
         << a << " " << b;
  }

  Complex add(Complex c )
  {
    Complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return (temp);
  }
};

void Complex::set_data(int x, int y) // Complex:: called as membership label
{
  a = x;
  b = y;
}

int main()
{
  Complex c1,c2,c3;
  c1.set_data(3, 4);
  c2.set_data(5,6);
  c3=c1.add(c2);
  c3.show_data();
  return 0;
}
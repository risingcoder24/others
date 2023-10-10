#include <iostream>
using namespace std;

class Complex 
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }

    void showdata()
    {
        cout<<" a= "<<a<<" b = "<<b<<endl;
    }
   // void fun(); -->member function
   friend void fun(Complex);
};

void fun(Complex c)
{
  cout<<"sum is "<<c.a+c.b;
}

int main()
{
  Complex c1;
  c1.setdata(3,5);
  fun(c1);
  return 0;
}
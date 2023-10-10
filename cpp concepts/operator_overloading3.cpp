// unary operator (pre and post)

#include <iostream>
using namespace std;

class Integer
{
private:
    int x;

public:
    void setdata(int a)
    {
        x = a;
    }

    void showdata()
    {
        cout << "x = " << x << endl;
    }

    Integer operator++() //pre increment 
    {
        Integer i;
        i.x = ++x;
        return (i);
    }

    Integer operator++(int) //post increment
    {
        Integer i;
        i.x=x++;
        return i;

    }
};

int main()
{
    Integer i1, i2;
    i1.setdata(3);
    i1.showdata();
    i2 = i1++; // i2=i1.operator++();
    i1.showdata();
    i2.showdata();
    return 0;
}

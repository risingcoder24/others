#include <iostream>
using namespace std;

class Complex
{
    private:
    int a,b;

    public:
    ~Complex()
    {
      cout<<"destructor";
    }
};
void fun()
{
    Complex obj;

}

int  main()
{
    fun();
    return 0;
}
#include <iostream>
using namespace std;

class Myclass
{
private:
    int x;
    static int count;

public:
    Myclass()
    {
        count++;
    }

    static int getcount()
    {
        return count;
    }
};

int Myclass::count = 0;

int main()
{
    cout << "Initial count " << Myclass::getcount() << endl;
    Myclass obj1, obj2, obj3, obj4;
    cout << "Next count  is " << Myclass::getcount() << endl;
}

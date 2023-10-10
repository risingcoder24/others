#include <iostream>
using namespace std;

class Myclass
{
    public: 
    int x;
    static int count;

    Myclass()
    {
        count++;
    }
};

int Myclass::count=0;

int main()
{
    cout<<"Initial count "<< Myclass::count<<endl;
    Myclass obj1,obj2,obj3,obj4;
    cout<<"Next count  is "<<Myclass::count<<endl;

}

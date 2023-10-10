#include <iostream>
using namespace std;

class Number{

    int a = 0;
    public:
        Number(){}

        Number(int num){

            a = num;
        }

        Number(Number &obj){    //copy constructor

            a = obj.a;
        }


        void display(){

            cout<<"The number for this object is "<<a<<endl;
        }
};

int main(){

    Number x, y, z(45);
    x = Number(5);
    x.display();
    y.display();
    z.display();
    Number z1;
    z1 = Number(z);
    z1.display();

    return 0;                    
}
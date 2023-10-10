#include <iostream>
using namespace std;

int main(){
    int a = 7;
    cout<<a++<<endl; //7, a = 8
    cout<<a<<endl;
    cout<<++a<<endl; //9, a = 9
    cout<<a<<endl;
    cout<<a--<<endl; //9, a = 8
    cout<<a<<endl;
    cout<<--a<<endl; //7, a = 7
    cout<<a<<endl;
return 0;
}
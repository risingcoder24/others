#include <iostream>
#include <conio.h>
using namespace std;
int add(int,int=0,int=0);

int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b)<<endl;
    int c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    cout<<"Sum is "<<add(a,b,c);
    getch();

}

int add(int x, int y, int z){

    return(x+y+z);
}
//Function (call by value)
// when formal arguments are ordinary variables, it is function call by value


#include <iostream>
using namespace std;
int sum(int , int);

int main(){
    int a=5,b=6,s;
    s=sum(a,b);
    cout<<"sum is "<<s;
    return 0;
}

int sum(int x , int y){

    return(x+y);
}


//when formal arguments are pointer variables, it is function call by address

/*
#include <iostream>
using namespace std;
int sum(int* , int*);

int main(){
    int a=5,b=6,s;
    s=sum(&a,&b);
    cout<<"sum is "<<s;
    return 0;
}

int sum(int*p , int*q){

    return(*p+*q);
}
*/

//when formal arguments are reference variables,it is function call by reference

/*
#include <iostream>
using namespace std;
int sum(int &, int &);

int main(){
    int a=5,b=6,s;
    s=sum(a,b);
    cout<<"sum is "<<s;
    return 0;
}

int sum(int &x , int &y){

    return(x+y);
}
*/
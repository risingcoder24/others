//Reference variable.

#include <iostream>
using namespace std;

int main(){

    int x,&y=x;
    y++;
    cout<<x;

    return 0;

}

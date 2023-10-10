#include <bits/stdc++.h>

using namespace std;


// Complete the catAndMouse function below.
int main(){
int q,c1,c2,i;
int x,y,z;

cin>>q;

for(i=0;i<q;i++)
{
    cin>>x >>y >>z;
    
    c1=abs(x-z);
    c2=abs(y-z);
    
    if(c1>c2)
    cout<<"Cat B"<<endl;
    else if(c2>c1)
    cout<<"Cat A"<<endl;
    if(c1==c2) {
    cout<<"Mouse C"<<endl;
    }
}
return 0;
}


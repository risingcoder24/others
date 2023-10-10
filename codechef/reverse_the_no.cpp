#include <iostream>
using namespace std;

int main(){

    int T,i,N;

    cin>>T;

    for(i=0;i<T;i++){
        cin>>N;
    
        int rem,j=0;
        for(; N!=0;){
         
         rem=N%10;
         j=j*10+rem;
         N=N/10;

        
        }
        cout<<j<<endl;
    }
           
     return 0;

}
#include <iostream>
using namespace std;

int main(){

    int num,i,arr[100];
    

    cin>>num;

    for(i=0;i<num;i++){
        cin>>arr[i];
      int  fact=1;
        for(int j=arr[i];j>=1;j--){
           fact*=j;
            
        }
        cout<<fact<<endl;
    }
   

    return 0;
}
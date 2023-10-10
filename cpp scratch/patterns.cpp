#include <iostream>
using namespace std;

//fixed number of rows and columns

int main(){

    int n;

    cin>>n;

    for(int i = 0; i<n; i++){

        for(int j = 0; j<n; j++){

            cout<<" * ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i = 1; i<=n; i++){
        for(int j = 1;j<=n;j++){
            cout<<i<<" ";
        }
    cout<<endl;
    }
    cout<<endl;

    for(int i = 1; i<n; i++){
        for(int j = n; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int k = 1;    
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<k<<"    "<<"   ";
            k++;
        }
        cout<<endl;
      
        
    }
    cout<<endl;

    for(int i = 1; i<=n; i++){
        for(int j = i; j<=n; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<i<<" ";        
        }
        cout<<endl;
    }
    cout<<endl;
    
    int p = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<p<<" "; 
            p++;       
        }
        cout<<endl;
       
    }
    cout<<endl;

   
    for(int i = 1; i<=n; i++){
        int count = i;
        for(int  j = 1; j<=i; j++){
            cout<<count<<" ";
            count++;

        }
        cout<<endl;
        
    }
    cout<<endl;



return 0;
}

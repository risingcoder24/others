#include <iostream>

using namespace std;

int main() {
    
    int n,p = 0, counter, x;
    cin >> n;
    
    for( int i=0; i<n; i++ ) {
        cin >> x;
        
        if( x >p ) {
          p = x; 
            counter = 1;
        }
        else if( x == p )
           counter++;
    }
    
    cout <<counter;
    
    
    return 0;
}
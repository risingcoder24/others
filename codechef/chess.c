#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t,n,i;
	
	cin>>t;
	
	while(t--){
	    cin>>n;
	    if(n%2==0){
	    int ans=0;
	    ans+=n*n;
	    n-2;
	    }
	    
	    else{
	        ans+=n*n+1;
	    }
	    
	}
	return 0;
}

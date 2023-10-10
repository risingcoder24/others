#include <iostream>
using namespace std;

int main()
{
    int n,k,i,j,count=0;
    int ar[100];
    
    cin>>n>>k;
    
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    for(i=0;i<n-1;i++) 
    {
        for(j=i+1;j<n;j++)
        {
            if((ar[i]+ar[j])%k==0)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int count1=0,count2=0;
    int s,t,a,b,m,n;
    int i,j,da,db;
    
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n; 
    
    for(i=0;i<m;i++)
    {
        cin>>da;
        if(da+a>=s && da+a<=t)
        {
            count1++;
            
        }
    }
    for(j=0;j<n;j++)
    {
        cin>>db;
        if(db+b<=t && db+b>=s)
        {
            count2++;
            
        }
    }
    
    cout<<count1<<endl<<count2;
    return 0;
}
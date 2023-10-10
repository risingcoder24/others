#include <bits/stdc++.h>

using namespace std;

int miniMaxSum(int);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
int main()
{   
    int arr[10];
    int i,n=5,sum=0;
    int min,max,M,m;
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    
    min=arr[0];
    max=arr[0];
    
    for(i=1;i<n;i++)
    {
        if(arr[i]<max)
        {
            min=arr[i];
        }
        
        if(arr[i]>min)
        {
            max=arr[i];
        }
        
    }
m=sum-max;
M=sum-min;
cout<<m<<" "<<M<<endl;
return 0;
}
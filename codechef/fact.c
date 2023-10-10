#include <stdio.h>
int main(){

    int t,i,j;
    long long int n;

    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int f=1;
        for(j=n;j>=1;j--){
        f*=j;
        
        }
       
          printf("%d\n",f);
    }
     
    return 0;
}
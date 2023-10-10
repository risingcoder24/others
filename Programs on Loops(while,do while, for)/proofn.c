//Write a program to calculate product of first N natural numbers.


#include <stdio.h>

int main(){

    int n,m=1,i;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        m*=i;
        
    }
    printf("Product of %d natural nos is : %d\n",n,m);

    return 0;
}
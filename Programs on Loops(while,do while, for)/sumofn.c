//Write a program to calculate sum of first N natural numbers.

#include <stdio.h>

int main(){

    int n,s=0,i;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        s+=i;
        
    }
    printf("Sum of %d natural nos is : %d\n",n,s);

    return 0;
}
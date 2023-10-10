//Write a program to calculate sum of first N even natural numbers

#include <stdio.h>

int main(){

    int i,n,num=0;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        if(i%2==0){
            num+=i;
        }
    }
    printf("Sum of first %d even natural no is : %d\n",n,num);
    
    return 0;
    }
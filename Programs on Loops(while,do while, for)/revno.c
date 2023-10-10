//Write a program to reverse a number.

#include <stdio.h>

int main(){

    int n,rem,i=0,sum;

    printf("Enter any integer : ");
    scanf("%d",&n);

    for(;n!=0;){

        rem=n%10;
        i=i*10+rem;
        n=n/10;
          

    }
    printf("%d\n",i);
}
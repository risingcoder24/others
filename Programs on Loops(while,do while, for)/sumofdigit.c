//Write a program to calculate sum of the digits of a given number.

#include <stdio.h>

int main(){

    int n,rem,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(;n!=0;){
       
      rem=n%10;
      n=n/10;
      sum=sum+rem;

    }
    printf("%d\n",sum);
    return 0;
}
//Write a program to count digits in a given number.

#include <stdio.h>

int main(){

    int d,i=0,n,rem;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(;n!=0;){
       
      rem=n%10;
      n=n/10;

      i++;

    }
    printf("%d\n",i);
    return 0;
}
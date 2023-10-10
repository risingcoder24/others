//Write a program to print first N natural numbers. (N is given by user).

#include <stdio.h>

int main(){

    int n,i;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    printf("%d\n",i);

    return 0;
}
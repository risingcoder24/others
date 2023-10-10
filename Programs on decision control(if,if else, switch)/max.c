//Write a program to to find greater between two numbers

#include <stdio.h>

int main(){

    int a,b;

    printf("Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of b : ");
    scanf("%d",&b);
    
    if(a>b)
    printf("%d is max than %d\n",a,b);
    
    else
    printf("%d is max than %d\n",b,a);

    return 0;
    }
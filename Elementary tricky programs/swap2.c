//Write a program to swap two numbers without using third variable

#include <stdio.h>

int main(){

    int a,b;

    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped value a : %d\n",a);
    printf("swapped value b : %d\n",b);

    return 0;
}
//Write a program to check whether a given number is even or odd

#include <stdio.h>

int main(){

    int num;

    printf("Enter any number : ");
    scanf("%d",&num);

    if(num%2==0)
    printf("Number is even\n");
    else
    printf("Number is odd\n");

    return 0;
}
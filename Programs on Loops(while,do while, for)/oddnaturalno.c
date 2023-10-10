//Write a program to print first 10 odd natural numbers.

#include <stdio.h>

int main(){

    int n,i;

    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Odd natural nos are: \n");
    for (i = 1; i <= 10; i++)
    {

        if (i % 2 != 0)
        {

            printf("%d\n", i);
        }
    }

    return 0;
}
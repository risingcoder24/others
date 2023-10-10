//Write a program to calculate factorial of a number.

#include <stdio.h>

int main()
{

    int num, N = 1, i;

    printf("Enter any integer : ");
    scanf("%d", &num);

    printf("%d! is : ", num);

    for (i = num; i >= 1; i--)
    {

        N *= i;
    }
    printf("%d", N);

    return 0;
}
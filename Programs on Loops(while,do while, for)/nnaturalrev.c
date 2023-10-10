//Write a program to print first N even natural numbers in reverse order

#include <stdio.h>

int main()
{

    int i, n;

    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("First n even natural nos are : \n");
    for (i = n; i >= 1; i--)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
    }

    return 0;
}
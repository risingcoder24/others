//Write a program to print first N even natural numbers.

#include <stdio.h>

int main()
{

    int i, n;

    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Even natural nos are: \n");
    for (i = 1; i <=n ; i++)
    {

        if (i % 2 == 0)
        {

            printf("%d\n", i);
        }
    }
}
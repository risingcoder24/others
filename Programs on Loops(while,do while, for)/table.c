//Write a program to print table of user’s choice

#include <stdio.h>

int main()
{

    int i, j, n, t;

    printf("Enter your choice of table : ");
    scanf("%d", &n);

    for (i = n, j = 1; j <= 10; j++)
    {

        t = i * j;
        printf("%d x %d = %d\n", i, j, t);
    }

    return 0;
}
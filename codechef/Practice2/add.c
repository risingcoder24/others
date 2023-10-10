//The task is very simple: given two integers A and B, write a program to add these two numbers and output it.

#include <stdio.h>

int main()
{

    int t, i, a, b, sum;

    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d %d", &a, &b);
      
        printf("%d\n",a+b);
    }
    
   
    return 0;
}
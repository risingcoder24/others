#include <stdio.h>

int main()
{

    int t, i, n;

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int sum=0,rem=0;
        for (; n > 0;)
        {
            rem = n % 10;
            sum = sum+rem;
            n = n / 10;
        }
        printf("%d\n", sum);
    }
   

    return 0;
}
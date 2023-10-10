#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int rem;
        scanf("%d", &n);
        int count = 0;
        while (n)
        {
            rem = n % 10;
            if (rem == 4)
                count++;
            n = n / 10;
        }
        printf("%d\n", count);
    }
    return 0;
}

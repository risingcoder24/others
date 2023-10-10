#include <stdio.h>

int Circular_shift(int *, int *, int *);
int main()
{

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d, %d, %d\n", x, y, z);
    Circular_shift(&x, &y, &z);
    printf("%d, %d, %d\n", x, y, z);
    return 0;
}

int Circular_shift(int *a, int *b, int *c)
{
    
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
    
        
    return 0;
}
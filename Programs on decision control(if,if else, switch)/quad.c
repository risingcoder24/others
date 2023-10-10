//Write a program to find roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c, D;
    float  r1, r2;

    printf("Enter the value of a,b,c : ");
    scanf("%d %d %d", &a, &b, &c);

    D = (b * b) - (4 * a * c);

    if (D < 0)
        printf("Imaginary roots\n");

    if (D == 0)
    {
        printf("Equal roots\n");
        r1 = (-b ) / (2 * a);
        r2 = (-b ) / (2 * a);
        printf("Roots are : r1=%.2f,r2=%.2f\n", r1, r2);
    }

    if (D > 0)
    {
        printf("Two distinct roots\n");
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are : r1=%.2f,r2=%.2f\n", r1, r2);
    }
    return 0;
}

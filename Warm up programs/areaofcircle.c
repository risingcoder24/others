//Write a program to calculate area of a circle

#include <stdio.h>

int main(){

    float a,r;
    float p=3.14;

    printf("Enter the radius of the circle : ");
    scanf("%f",&r);
    a=p*r*r;
    printf("Area of circle with radius %.2f is : %.2f\n",r,a);

    return 0;
}
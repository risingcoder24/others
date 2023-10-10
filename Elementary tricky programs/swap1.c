//Write a program to swap two numbers

#include <stdio.h>

int main(){

    int a,b,temp ,temp2;

    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    
    temp=a;
    temp2=b;
    a=b;
    b=temp;
    printf("Previous value of a : %d\n",temp);
    printf("Previous value of b : %d\n",temp2);
    printf("Swapped value of a : %d\n",a);
    printf("Swapped value of b : %d\n",b);

    return 0;   
 }
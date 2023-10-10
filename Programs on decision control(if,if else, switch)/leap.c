//C Program to check leap year

#include <stdio.h>


int main(){

    int yr;

    printf("Enter any year : ");
    scanf("%d",&yr);

    if(yr%4)
    printf("Not a leap year\n");

    else if(yr%100)
    printf("Leap year\n");

    else if(yr%400)
    printf("Not a leap year\n");

    else 
    printf("Leap year\n");

    return 0;
}
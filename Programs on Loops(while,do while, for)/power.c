//Write a program to calculate x power y.(when user input x is 2 and y is 3 then the result will be 8).

#include <stdio.h>

int main(){

    int x,y,i,p=1;

    printf("Enter the value of base x : ");
    scanf("%d",&x);

    printf("Enter the value of power y : ");
    scanf("%d",&y);

    for(i=1;i<=y;i++){
        
        p*=x;

    }
    printf("%d\n",p);

    return 0;
}
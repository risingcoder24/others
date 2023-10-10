//Write a program to check whether a number is even or odd without using modulus(%) operator


//smart approach

/*if we take 2 which is even number its binary will be 0010 and lets take an odd number 5 its 
binary will be 0101
after observing the last digit of the binary numbers ,we conclude saying that 
if the binay number has 0 in its last digit it is even and if it has 1 then it is odd number.*/

#include <stdio.h>

int main(){

    int num;

    printf("Enter any integer : ");
    scanf("%d",&num);

    if(num&1){                 //bitwise'&'operator.
        printf("Odd number\n");
    }
    else
    printf("Even number\n");

    return 0;
}


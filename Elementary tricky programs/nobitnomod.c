//Write a program to check even or odd without modulus and bitwise operator

/*
#include <stdio.h>

int main()
{

    int num, q, d, r;

    printf("Enter an integer : ");
    scanf("%d", &num);

    q = num / 2;
    d = q * 2;
    r = num - d;
  
    if (r != 0){
        
        printf("Number is odd\n");
    }
    else
        printf("Number is even\n");

    return 0;
}
*/

//smart approach

#include <stdio.h>

int main(){

    int num;

    printf("Enter any integer : ");
    scanf("%d",&num);

    if(num/2*2==num)
    printf("Even\n");
    else
    printf("Odd\n");

    return 0;

}
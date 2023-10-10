//Write a program to print all Armstrong numbers under 1000.

#include <stdio.h>

int main(){

    int n,i,a=0,rem;

    for(i=153;i<=1000;i++){
    rem=i%10;
    i=i/10;
    a+= (rem*rem*rem);
    
    if(a==i){
        
        printf("%d\n",a);
    }
    }  
    return 0;

}
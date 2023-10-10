/*Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction 
if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal
 transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US. 
 Calculate Pooja's account balance after an attempted transaction.*/

#include <stdio.h>

int main(){

    int x;
    float y;

    
   
    scanf(" %d %f",&x,&y);
    
    if(x%5==0 && y>x){
        printf("%.2f\n",(y-x)-0.50);
    }
    else if(x%5==0 && y<x){
        printf("%.2f\n",y);
    }
    else {
        printf("%.2f\n",y);
    }
    return 0;

}
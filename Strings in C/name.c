#include <stdio.h>

int main(){

char s[3][30];
int i;

printf("Enter your name : ");
for(i=0;i<=2;i++){

 gets(&s[i][0]); //gets(s[i]);
}
for(i=0;i<=2;i++){

    puts(s[i]);
}
return 0;

}
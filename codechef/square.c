/*You are given N identical squares, each with side length A. All the squares have their sides
 parallel to the x−axis and y−axis. That is, the squares are not tilted. You have to take several
(possibly, zero or all) squares and rearrange them to obtain a mega square. 
The mega square can't have any gap in the enclosed region or have overlapping squares. 
Also, you cannot rotate any square.
Output the side length of the largest mega square that you can obtain.*/



#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
   for(int i=1;i<=t;i++)
    {
        int n;
        int x,rr;
        scanf("%d %d",&n,&x);
        rr=floor(sqrt(n));
      printf("%d\n",(x*rr));
        
    }
}
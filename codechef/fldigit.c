//If Given an integer N . Write a program to obtain the sum of the first and last digits of this number.



#include <stdio.h>

int main() {

	int T, i, firstdigit, rem;
	int arr[T];
	scanf("%d", &T);
	
	for(i=0; i<T; i++)
	{
	  scanf("%d",&arr[i]);  
	}
	for(i=0; i<T; i++)
	{
	    firstdigit= arr[i]%10;
	    while(arr[i]!=0)
        {
          rem=arr[i]%10;
          arr[i]= arr[i]/10;
        }
	    printf("%d\n", rem + firstdigit);
	}
	return 0;
}

#include <stdio.h>

int main(void) {
    int T,D,L,R;
	scanf("%d",&T);
	for(int i = 0; i<T; i++){
	    scanf("%d %d %d",&D,&L,&R);
	    if(L<=D && D<=R){
	        printf("Take second dose now\n");
	    }
	   else if(D<L)
        {
            printf("Too Early\n");
        }
        else if(D>R)
        {
            printf("Too Late\n");
        }
	}
	return 0;
}


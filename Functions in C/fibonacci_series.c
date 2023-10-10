//recursion of FS

#include <stdio.h>

int main(){
    int FS(int);
    int i,n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",FS(i));
    }
    return 0;
}

int FS(int x){
    
if(x==1||x==2){
    return 1;
}

return (FS(x-1)+FS(x-2));

}
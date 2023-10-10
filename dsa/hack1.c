
#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;  
};

void printLinkedList(struct Node* ptr) {
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    int n1,n2;
    
    struct Node* head;
    struct Node* second;
    
    scanf("%d %d", &n1,&n2);
    
    
    head=(struct Node*)malloc(sizeof(struct Node*));
    second=(struct Node*)malloc(sizeof(struct Node*));

    
    head->data=n1;
    head->next=second;
    
    second->data=n2;
    second->next=NULL;
    

    printLinkedList(head);
    return 0;
}
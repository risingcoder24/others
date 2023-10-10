// Creation of linked list

/*#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void linked_list(struct Node* ptr){
   while (ptr!=NULL){
   printf("%d\n",ptr->data);
   ptr=ptr->next;
   }
}

int main(){

    struct Node* head;
    struct Node* second;
    struct Node* third;

    //allocate memory for nodes in the linked list in heap
    head = (struct Node*)malloc(sizeof(struct Node*));
    second = (struct Node*)malloc(sizeof(struct Node*));
    third = (struct Node*)malloc(sizeof(struct Node*));

    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=77;
    third->next=NULL;

  linked_list(head);
}
*/

// Insertion of a node in linked list

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node* next;
// };

// void linked_list(struct Node* ptr){
//    while (ptr!=NULL){
//    printf("%d\n",ptr->data);
//    ptr=ptr->next;
//    }
// }

// // Insert at head
// struct Node * insertAtFirst(struct Node *head, int data){
//     struct Node* ptr;
//     ptr= (struct Node*)malloc(sizeof(struct Node*));
//     ptr->next=head;
//     ptr->data=data;
//     return ptr;
// }

// // Insert in between
// struct Node* insertAtIndex(struct Node* head, int data, int index){
//     struct Node* ptr=(struct Node*)malloc(sizeof(struct Node*));
//     struct Node* p=head;
//     int i=0;
//     while(i!=index-1){
//         p=p->next;
//         i++;
//     }
//     ptr->data=data;
//     ptr->next=p->next;
//     p->next=ptr;
//     return head;
// }

// // Insert at end
// struct Node* insertAtEnd(struct Node* head, int data){
//     struct Node* ptr=(struct Node*)malloc(sizeof(struct Node*));
//     ptr->data=data;
//     struct Node* p=head;
//     while(p->next!=NULL){
//         p=p->next;
//     }
//     p->next=ptr;
//     ptr->next=NULL;
//     return head;
// }

// // Insert after a node
// struct Node* insertAfterNode(struct Node* head, struct Node* PreNode, int data){
//     struct Node* ptr=(struct Node*)malloc(sizeof(struct Node*));
//     ptr->data=data;
//     ptr->next=PreNode->next;
//     PreNode->next=ptr;
//     return head;
// }

// int main(){

//     struct Node* head;
//     struct Node* second;
//     struct Node* third;

//     //allocate memory for nodes in the linked list in heap
//     head = (struct Node*)malloc(sizeof(struct Node*));
//     second = (struct Node*)malloc(sizeof(struct Node*));
//     third = (struct Node*)malloc(sizeof(struct Node*));

//     head->data=7;
//     head->next=second;

//     second->data=8;
//     second->next=third;

//     third->data=77;
//     third->next=NULL;

// linked_list(head);
// // head= insertAtFirst(head, 56);
// // head=insertAtIndex(head,56,3);
// // head=insertAtEnd(head,56);
// head=insertAfterNode(head,second,56);
// linked_list(head);
// return 0;

// }

// Deletion in a linked list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linked_list(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Delete the first node
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Delete a node in between
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// Delete the last node
struct Node *deleteLastNode(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < -1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// Delete a node with a given key/index/data
struct Node *deleteAtGivenIndex(struct Node *head, int key)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != key && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == key)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;

    // allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node *));
    second = (struct Node *)malloc(sizeof(struct Node *));
    third = (struct Node *)malloc(sizeof(struct Node *));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 77;
    third->next = NULL;

    printf("linked list before\n");
    linked_list(head);
    printf("Linked list after\n");
    // head=deleteFirst(head);
    // head=deleteAtIndex(head,2);
    // head=deleteLastNode(head);
    head = deleteAtGivenIndex(head, 1);
    linked_list(head);
}
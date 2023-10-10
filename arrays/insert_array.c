#include <stdio.h>
#include <stdlib.h>

struct insert
{
    int A[10];
    int size;
    int length;
};


//Inserting Element in an Array at specific index

void Insert(struct insert *arr, int index, int x ){

    if(index>=0 && index<=arr->length){

        for(int i = arr->length; i>index; i--){
            
            arr->A[i] = arr->A[i-1];
        }

        arr->A[index] = x;
        arr->length++;
    }

}

//Displaying the elements of new array

void Display(struct insert arr)
{

    printf("Elements are\n");

    int i;
    for (i = 0; i < arr.length; i++)
    {

        printf("%d\n", arr.A[i]);
    }
}

int main()
{

    struct insert arr = {{2, 3, 4, 6, 8}, 10, 5};
    // Append(&arr, 10);
    Insert(&arr, 3 , 15);
    Display(arr);

    return 0;
}
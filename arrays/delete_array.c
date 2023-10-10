#include <stdio.h>
#include <stdlib.h>

struct delete
{
    int A[10];
    int size;
    int length;
};

//Delete an element from a specific index

int Delete(struct delete *arr, int index){

    int x;

    if(index>=0 && index < arr->length){

        x = arr->A[index];

        for(int i = index; i<arr->length; i++){

            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }

    return 0;

}

//Displaying the elements of new array

void Display(struct delete arr)
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

    struct delete arr = {{2, 3, 4, 6, 8}, 10, 5};
   
    printf("%d\n", Delete(&arr,4));
    Display(arr);

    return 0;
}
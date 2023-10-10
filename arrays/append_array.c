#include <stdio.h>
#include <stdlib.h>

struct append_array
{
    int A[10];
    int size;
    int length;
};

//Appending an element at the end of the array

void Append(struct append_array *arr, int x)
{

    if (arr->length < arr->size)
    {

        arr->A[arr->length++] = x;
    }
}


//Displaying the elements of new array

void Display(struct append_array arr)
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

    struct append_array arr = {{2, 3, 4, 6, 8}, 10, 5};
    Append(&arr, 10);
    Display(arr);

    return 0;
}
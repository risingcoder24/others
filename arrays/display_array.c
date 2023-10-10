// program to diplay array (DMA) and inserting next element of array

#include <stdio.h>
#include <stdlib.h>

struct display_array
{
    int *A;
    int size;
    int length;
};

// Inserting an element in an array

void Append(struct display_array *arr, int x)
{

    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

// Display Function to display the elements of array

void Display(struct display_array arr)
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

    struct display_array arr;
    int i, n;
    int x;

    printf("Enter Size of Array");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter number of numbers");
    scanf("%d", &n);

    printf("Enter all the elements\n");

    for (i = 0; i < n; i++)
    {

        scanf("%d", &arr.A[i]);
    }

    arr.length = n;

    Display(arr);

    printf("Enter the element to be inserted next");
    scanf("%d", &x);

    Append(&arr, x);

    Display(arr);
}

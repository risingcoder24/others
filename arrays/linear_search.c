// Linear Search

#include <stdio.h>
#include <stdlib.h>

struct linear_search
{
    int A[10];
    int size;
    int length;
};

int LinearSearch(struct linear_search arr, int key)
{

    for (int i = 0; i < arr.length; i++)
    {

        if (key == arr.A[i])
        {
            return i;
        }
    }

    return -1;
}

void Display(struct linear_search arr)
{

    for (int i = 0; i < arr.length; i++)
    {

        printf("%d\n", arr.A[i]);
    }
}

int main()
{

    struct linear_search arr = {{8, 3, 7, 12, 15, 6, 9, 10, 14, 2}, 10, 10};

    printf("%d\n", LinearSearch(arr, 12));
    printf("\n");
    Display(arr);
}
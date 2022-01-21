/*
Program to insert element in array
*/

#include <stdio.h>
#define MAX_SIZE 100 // maxsize to make program dynamic

int main()
{
    int arr[MAX_SIZE];
    int i, size, num, pos;

    // input size of the array
    printf("Enter size of the array : ");
    scanf("%d", &size);

    // input elements in array
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // input new element and position to insert
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);

    // if position of element is not valid
    if(pos > size+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        //new array element by shifting to right
        for(i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
        // insert new element at given position and increment size
        arr[pos-1] = num;
        size++; 

        /* Print array after insert operation */
        printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
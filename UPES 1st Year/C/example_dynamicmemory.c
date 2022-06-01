    // Program to calculate the sum of n numbers entered by the user

    #include <stdio.h>
    #include <stdlib.h>

    int main() {
    int n1, n2, n3, i, j, *ptr1, *ptr2;

    printf("Enter number of elements in n1: ");
    scanf("%d", &n1);

    ptr1 = (int*) malloc (n1 * sizeof(int));
    
    // if memory cannot be allocated
    if (ptr1 == NULL) {
        printf ("Error! memory not allocated.");
        exit (0);
    }

    printf ("Enter n1 elements: ");
    for (i = 0; i < n1; ++i) {
        scanf ("%d", ptr1 + i);
    }
    
    
    printf("Enter number of elements in n2: ");
    scanf("%d", &n2);

    ptr2 = (int*) malloc (n2 * sizeof(int));
    
    // if memory cannot be allocated
    if (ptr2 == NULL) {
        printf ("Error! memory not allocated.");
        exit (0);
    }

    printf ("Enter n2 elements: ");
    for (j = 0; j < n2; ++j) {
        scanf ("%d", ptr2 + j);
    }

    n3 = n1 + n2;
    
    printf("Array is %d", n3);

    // deallocating the memory
    free (ptr1);
    free (ptr2);

    return 0;
    }
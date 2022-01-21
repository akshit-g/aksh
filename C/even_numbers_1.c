/*
C program to print all even numbers till n
*/

#include <stdio.h>

int main()
{
    int i, n;
  
    printf("Print all even numbers till: "); // user input
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);


    for(i=1; i<=n; i++)
    {
        // even condition
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
/*
Find if the given number is positive, negative or zero
*/

#include <stdio.h>
  
int main()
{
    int A;
  
    printf("Enter the number A: "); // user input
    scanf("%d", &A);
  
    if (A > 0) // condition definition
        printf("%d is positive.", A);
    else if (A < 0)
        printf("%d is negative.", A);
    else if (A == 0)
        printf("%d is zero.", A);
  
    return 0;
}
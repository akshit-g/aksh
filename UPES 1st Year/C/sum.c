/*
Program to find sum of two numbers
*/

#include <stdio.h>

int main ()
{
    int a, b, c;
    printf("Enter 1st number ");
    scanf ("%d", &a);
    
    printf("Enter 2nd number ");
    scanf ("%d", &b);
    
    c = a + b;
    
    printf ("The sum is %d %d %d", c, b, a);
    return 0;
}
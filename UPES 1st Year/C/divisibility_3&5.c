/*
Program to check divisibility by 5 and 3
*/

#include <stdio.h>

int main()
{
    int i, Number;
    printf("\n Please Enter any number\n");  // user input
    scanf("%d", &Number);
    
    printf(" Numbers which are divisible by 3 and 5 ");
 
    for (i=1; i<=Number; i++)
    {
            if (i%3==0 && i%5==0) // divisibility criteria
                    printf(" %d", i);
    }
    getch();
} 
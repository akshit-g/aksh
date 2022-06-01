/*
Program to check divisibility by 2 and 3
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: "); // user input
    scanf("%d", &num);


    if((num % 2 == 0) && (num % 3 == 0)) // condition
    {
        printf("Number is divisible by 2 and 3");
    }
    else
    {
        printf("Number is not divisible by 2 and 3");
    }

    return 0;
}
/*
Add two numbers after taking input from user and display result
*/

#include <stdio.h>

int main()
{
    int num1, num2, result;
    ask (&num1,&num2); // function call for user input
    result = add (num1,num2); // function call for result
    display (result); // function call for disply result
}


void ask (int *n1,int *n2) // ask function definiton
{
    printf ("Enter two numbers \n");
    scanf ("%d %d", n1, n2); // user input for two numbers
}

int add (int n1, int n2) // add function definiton
{
    return (n1+n2);
} 

void display (int result) // display function definiton
{
    printf ("Sum = %d ", result);
}
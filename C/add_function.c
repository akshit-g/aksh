#include <stdio.h>
void ask (int *n1,int *n2)
{
    printf ("Enter two numbers \n");
    scanf ("%d %d", n1, n2);
}
int add (int n1, int n2)
{
    return (n1+n2);
} 
void display (int result)
{
    printf ("Sum = %d ", result);
}

int main()
{
    int num1, num2, result;
    ask (&num1,&num2);
    result = add (num1,num2);
    display (result);
}
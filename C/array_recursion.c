/*
Find sum of all array elements using recursion
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[30], b, x, c;
    scanf("%d", &b);
    for(x = 0; x<b; x++)
    {
        scanf("%d", &a[x]);
    }
    x = 0;
    c = max(a, b, 0); // max function call
    printf("%d", c);
}


int max(int a[], int b, int x) // function definiton
{
    if(a[x] != '\0'){
        return a[x] + max(a, b, x+1);
    }
}
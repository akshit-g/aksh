/*
Akshit Gandotra
Question 2 (Lab)
Implement Doubly Linked list and its operations
*/

#include <stdio.h>
#include <string.h>

#define MAX 100	

int top =- 1;
int item;

char stack[MAX];

void push(char item);
char pop(void);
int empty(void);
int full(void);
 
int main()
{
    char str[MAX];
    int i;
    
    printf("Input a string: ");
    scanf("%[^\n]s", str);
    
    for(i = 0; i < strlen(str); i++)
        push(str[i]);
        
    for(i = 0; i < strlen(str); i++)
        str[i] = pop();

    printf("Reversed String is: %s\n", str);
    
    return 0;
}

void push(char item)
{
    // check for overflow
    if(full())
    {
        printf("\nOverflow!\n");
        return;
    }
    
    // increase top and push item in stack
    top = top + 1;
    stack[top] = item;
}
 
 char pop()
{
    // check for underflow
    if(empty())
    {
        printf("\nUnderflow!\n");
        return 0;
    }

    // pop item and decrease top
    item = stack[top];
    top = top - 1;
    return item;
}

int empty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}

int full()
{
    if(top == MAX - 1)
        return 1;
    else
        return 0;
}
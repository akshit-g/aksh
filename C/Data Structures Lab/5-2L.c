/*
Akshit Gandotra
Question 2 (Lab)
Check Whether the string is Palindrome or not using Stack and Queue
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
 
int top = -1, front = 0;
int stack[MAX];
void push(char);
void pop();
 
void main()
{
    int i, choice;
    char s[MAX], b;
    while (1)
    {
        printf("1. Enter string\n2. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the String:\n");
            scanf("%s", s);
            for (i = 0 ; s[i] != '\0' ; i++)
            {
                b = s[i];
                push(b);
            }
            for (i = 0 ; i < (strlen(s) / 2) ; i++)
            {
                if (stack[top] == stack[front])
                {
                    pop();
                    front++;
                }
                else
                {
                    printf("%s is not a palindrome\n", s);
                    break; 
                }
            }
            if ((strlen(s) / 2) == front)
                printf("%s is palindrome\n",  s);
            front = 0;
            top = -1;
            break;
        case 2:
            exit(0);
        default:
            printf("Enter correct choice\n");
        }
    }
}
 
// push a character into stack
void push(char a)
{
    top++;
    stack[top]  =  a;
}
 
// delete an element in stack
void pop()
{
    top--;
}
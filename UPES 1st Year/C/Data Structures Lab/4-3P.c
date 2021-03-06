/*
Akshit Gandotra
Question 3 (Practice)
Evaluate Postfix Expression using stack and array
*/

#include <stdio.h>
#include <ctype.h>

#define MAXSTACK 100  // max size of stack
#define POSTFIXSIZE 100  // max number of charcters in postfix expression


int stack[MAXSTACK];
int top = -1;

void push(int item)
{

    if (top >= MAXSTACK - 1) {
        printf("stack over flow");
        return;
    }
    else {
        top = top + 1;
        stack[top] = item;
    }
}

int pop()
{
    int item;
    if (top < 0) {
        printf("stack under flow");
    }
    else {
        item = stack[top];
        top = top - 1;
        return item;
    }
}

void EvalPostfix(char postfix[])
{

    int i;
    char ch;
    int val;
    int A, B;

    // evaluate postfix expression
    for (i = 0; postfix[i] != ')'; i++) {
        ch = postfix[i];
        if (isdigit(ch))
        {
            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            
            A = pop();
            B = pop();

            switch (ch)
            {
            case '*':
                val = B * A;
                break;

            case '/':
                val = B / A;
                break;

            case '+':
                val = B + A;
                break;

            case '-':
                val = B - A;
                break;
            }

            push(val);
        }
    }
    printf(" \nResult of expression evaluation :\n%d\n", pop());
}

int main()
{

    int i;

    // declare character array to store postfix expression
    char postfix[POSTFIXSIZE];
    printf(" \nEnter postfix expression:\n");


    for (i = 0; i <= POSTFIXSIZE - 1; i++)
    {
        scanf("%c", &postfix[i]);

        if (postfix[i] == ')')
        {
            break;
        }
    }

    EvalPostfix(postfix);
    return 0;
}

/*
C program to check alphabet, digit or special character
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: "); //user input
    scanf("%c", &ch);


    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) // alphabet check
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9') // number check
    {
        printf("'%c' is digit.", ch); // digit check
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}
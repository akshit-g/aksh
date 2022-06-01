/*
Program to Check if a Given String is Palindrome
*/


#include <stdio.h>
#include <string.h>
 

int main()
{
    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    return 0;
}

void isPalindrome(char str[]) // function definition
{
    
    int l = 0;
    int h = strlen(str) - 1;
 
    
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);
}
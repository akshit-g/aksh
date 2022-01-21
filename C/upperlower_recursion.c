/*
Program to convert uppercase string to 
lowercase using recursion
*/
 
#include <string.h>
 

int main()
{
    char s[1000];  
    
 
    printf("Enter the string: "); // user input
    gets(s);
    
    stringlowercase(s); // function call
     
    printf("string in lowercase ='%s'\n",s);
    
 
 }

int stringlowercase(char *s) // function definition
{
	static int i = 0;
	if(s[i])
    {
    	if(s[i] >= 65 && s[i] <= 90 )
           s[i++] += 32;
         stringlowercase(s);
    }  
}
/*
Program to convert uppercase string to 
lowercase using function
*/

#include <string.h>
 
int main()
{
 
    char s[1000];  
    int i;
 
    printf("Enter  the string: "); // user input
    gets(s);
    
 
    stringlowercase(s); // function call
     
    printf("string in lowercase ='%s'\n",s);
    
}

void stringlowercase(char *s) // function definiton
{
	int i;
 
    	for(i=0; s[i]; i++)  
        {
          if(s[i] >= 65 && s[i] <= 90)
          s[i] += 32;
 	    }

}
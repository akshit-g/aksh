/******************************************
Program to convert uppercase string to 
lowercase using function
*******************************************/

#include <string.h>
 
void stringlowercase(char *s)
{
	int i;
 
    	for(i=0;s[i];i++)  
        {
          if(s[i]>=65 && s[i]<=90)
          s[i]+=32;
 	    }
 
     
 	
}
int main()
{
 
    char s[1000];  
    int i;
 
    printf("Enter  the string: ");
    gets(s);
    
 
    stringlowercase(s);
     
    printf("string in lowercase ='%s'\n",s);
    
}
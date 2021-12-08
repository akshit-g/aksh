/******************************************
Program to convert uppercase string to 
lowercase using for loop
*******************************************/

#include <string.h>
 
int main()
{
    char s[1000];  
    int i;
 
    printf("Enter  the string : ");
    gets(s);
    
 
     
    for(i=0;s[i];i++)  
    {
        if(s[i]>=65 && s[i]<=90)
         s[i]+=32;
 	}
 	
     
    printf("string in lowercase ='%s'\n",s);
 
 
    return 0;
}
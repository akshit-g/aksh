/*
Program to find the total number of alphabets, digits
or special characters in a string
*/

#include <string.h>
#define MAX 1000 // macros to make program dynamic

int main()
{
    char s[MAX]; 
    int i, alphabets=0, digits=0, specialcharacters=0;
 
    printf("Enter  the string : "); // user input
    gets(s);
     
    for(i=0; s[i]; i++)  
    {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) ) // condition test
          alphabets++;
        else if(s[i] >= 48 && s[i] <= 57)
         digits++;
        else
         specialcharacters++;
 
  	}
 	
     
    printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d", specialcharacters);
    
 
    return 0;
}
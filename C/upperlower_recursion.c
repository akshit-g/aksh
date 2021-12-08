/******************************************
Program to convert uppercase string to 
lowercase using recursion
*******************************************/
 
 #include <string.h>
 
int stringlowercase(char *s)
{
	static int i=0;
	if(s[i])
    {
    	if(s[i]>=65 && s[i]<=90] )
           s[i++]+=32;
         stringlowercase(s);
    }  
}
int main()
{
    char s[1000];  
    
 
    printf("Enter  the string: ");
    gets(s);
    
 
    stringlowercase(s);
     
    printf("string in lowercase ='%s'\n",s);
    
 
 }
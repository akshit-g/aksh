/*
Find the total number of alphabets, digits or 
special characters in a string
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define str_size 100 //Declare the maximum size of the string

void main()
{
    char str[str_size];
    int alp, digit, splch, i;
    alp = digit = splch = i = 0;


       printf("\n\nCount total number of alphabets, digits and special characters :\n");
       printf("--------------------------------------------------------------------\n"); 	
       printf("Input the string : "); // user input
       fgets(str, sizeof str, stdin);	
       

    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) // conditions
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9') // digits
        {
            digit++;
        }
        else // special character
        {
            splch++;
        }

        i++; // increment
    }

    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch);
}
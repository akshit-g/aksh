/*
Program to check if a number is palindrome or not using while loop
*/

#include <stdio.h>
int main()
{
   int num, reverse_num=0, remainder,temp;
   printf("Enter an integer: "); // user input
   scanf("%d", &num);

   temp=num;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
   } 

   if(reverse_num==num) // palindrome condition
      printf("%d is a palindrome number",num);
   else
      printf("%d is not a palindrome number",num);
      
   return 0;
}
/*
Program to reverse a given number using Recursive function
*/

#include<stdio.h>
int main()
{
   int num, reverse_number;

   printf("\nEnter any number:");
   scanf("%d",&num);

   reverse_number = reverse_function(num);
   printf("\nAfter reverse the no is :%d",reverse_number);
   return 0;
}

int sum = 0, rem;
reverse_function (int num) // function definiton
{
   if(num)
   {
      rem = num % 10;
      sum = sum * 10 + rem;
      reverse_function(num / 10);
   }
   else
      return sum;
   return sum;
}
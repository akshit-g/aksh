/*
Find the sum of digits of a number using while loop
*/

#include <stdio.h>

int main()
{
  int Number, Reminder, Sum=0;


  printf("\n Please Enter any number\n"); // user input
  scanf("%d", &Number);

  while(Number > 0) // while loop
  {
     Reminder = Number % 10;
     Sum = Sum+ Reminder;
     Number = Number / 10;
  }

  printf("\n Sum of the digits of Given Number = %d", Sum);

  return 0;
}
/*
C program to print all even numbers till n
*/

#include <stdio.h>
int main ()
{
  int i, n;

  // input number
  printf ("Enter Upper Limit: ");
  scanf ("%d", &n);

  printf ("Even numbers from 1 to %d are: \n", n);

  // start loop
  for (i = 1; i <= n; i++)
    {
      // even condition
      if (i % 2 == 0)
	      {
	      printf ("%d\n", i);
	      }
    }
  return 0;
}

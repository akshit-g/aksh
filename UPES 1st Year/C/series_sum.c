/*
Given value of ‘n’, find the sum of the series 1+ 1/2 + 1/3 + 1/4 + 1/5 + …+ 1/n
*/

#include <stdio.h>
 
int main()
{
    int n = 5;
    printf("Sum is %f", sum(n));
    return 0;
}


double sum(int n) // function definiton
{
  double i, s = 0.0;
  for (i = 1; i <= n; i++)
      s = s + 1/i;
  return s;
}
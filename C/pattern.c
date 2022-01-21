/*
Print the given pattern using nested for loop
*/

#include<stdio.h>
int main()
{
   int n;

   printf("Enter the number of rows: ");
   scanf("%d",&n);

   for(int r=1; r<=n; r++) // outer loop
   {
     for(int c=1; c<=n; c++) // inner loop
     {
       printf("%3d",r);
     }
     printf("\n");
   }

   return 0;
}
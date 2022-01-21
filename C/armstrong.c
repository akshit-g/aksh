/*
C program to print Armstrong numbers from 1 to n
*/

#include <stdio.h>
#include <math.h>

void main()
{
    int num, r, sum, temp;
    int stno, enno; // start number and end number

    printf("Input starting number of range: "); // user input
    scanf("%d", &stno);

    printf("Input ending number of range : "); // user input
    scanf("%d", &enno);

    printf("Armstrong numbers in given range are: ");
    for(num=stno; num<=enno; num++) // range condition
    {
         temp=num;
         sum = 0;

         while(temp!=0)
         {
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
    printf("\n");
}
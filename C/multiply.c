/**********************************************************************************************************
Multiply two given numbers without using the arithmetic binary multiplication operator using for loop
***********************************************************************************************************/
#include <stdio.h>

int main()
{
 int n1,n2,sum=0,i;

   printf("Enter the two numbers :\n");
   scanf("%d %d",&n1,&n2);

   for(i=1;i<=n1;i++)
     {
     sum=sum+n2;
     }
        printf("The multiplication of %d and %d is %d \n",n1,n2,sum);

}
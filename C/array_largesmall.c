/*
Program to find largest and smallest element
*/

#include <stdio.h>  
#include <conio.h>  
void main()  
{  
  int n, arr[n]; 
 
  printf ("Enter the number of the elements: ");  
  scanf ("%d", &n);  
  int i;  
  printf ("Enter %d elements of the array: ", n);  
  for (i=0; i<n; i++ )  
  {  
    scanf ("%d", &arr[i]);  
  }  
  int max, min;  
  max = arr[0];  
  min = arr[0];  
 
  for ( i=0; i<n; i++ )  
  {  
    if ( arr[i]>max )  
    {  
      max = arr[i];  
    }  
 
    if ( arr[i]<min )  
    {  
      min = arr[i];  
    }  
  }  
 
  printf ("Largest element is %d\n" , max);  
  printf ("Smallest element is %d\n" , min);  
 

} 
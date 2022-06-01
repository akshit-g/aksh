/*
Program to find sum of array
*/

#include <stdio.h>
 
int main()
{
    int arr[] = {12, 3, 4, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of given array is %d", sum(arr, n));
    return 0;
}


// function to return sum of elements
int sum(int arr[], int n)
{
    int sum = 0; // initialize sum
 
    // Iterate through all elements
    for (int i = 0; i < n; i++)
    sum += arr[i];
 
    return sum;
}
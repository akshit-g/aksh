/*
Given 2 numbers. Calculate sum, difference, multiplication and division
*/

#include <stdio.h>
int main()  
{  
    int num1, num2;  
    int sum, sub, mult, mod;  
    float div;  
  
    printf("Input any two numbers separated by comma : ");  
    scanf("%d,%d", &num1, &num2);  
  
    // all arithmetic operations
    sum = num1 + num2;  // sum
    sub = num1 - num2;  // difference
    mult = num1 * num2;  // multiplication
    div = (float)num1 / num2;  // division
    mod = num1 % num2;  // modulus
  
    //Results
    printf("The sum of the given numbers : %d\n", sum);  
    printf("The difference of the given numbers : %d\n", sub);  
    printf("The product of the given numbers : %d\n", mult);  
    printf("The quotient of the given numbers : %f\n", div);  
    printf("MODULUS = %d\n", mod);  
  
    return 0;   
} 
/*
C program to convert temperature into F and K
*/

#include <stdio.h>
#include <conio.h>

int main()
{
	float celsius, fahr, kelvin;
	printf("Enter temperature in celsius: ");
	scanf("%f", &celsius);
	fahr = 1.8 * celsius + 32.0; // conversion formula
	kelvin = 273.15 + celsius; // conversion formula
	printf("%0.2f Celsius = %0.2f Fahrenheit\n", celsius, fahr);
	printf("%0.2f Celsius = %0.2f Kelvin",celsius, kelvin);
	
	return(0);
}
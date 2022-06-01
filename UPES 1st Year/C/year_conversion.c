/*
Calculate the years, months, and days from a given integer
*/

#include <stdio.h>
int main()
{
	int ndays, y, m, d;	
	printf("Input no. of days: "); // user input
	scanf("%d", &ndays);

	y = (int) ndays / 365; // year calculation
	ndays = ndays - (365*y);
	m = (int)ndays / 30; // month calculation
	d = (int)ndays - (m * 30); // days calculation
	
	printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", y, m, d);
	return 0;
}
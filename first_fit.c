#include<stdio.h>
int main()
{
	float HoleSize[10], ProcessSize[10];
    int HNum, PNum, flags[10], allocation[10], i, j;
	for(i = 0; i < 10; i++)
	{
		flags[i] = 0;
		allocation[i] = -1;
	}
	printf("Enter no. of holes: ");
	scanf("%d", &HNum);
	printf("Enter size of each hole:\n");
	for(i = 0; i < HNum; i++)
		scanf("%f", &HoleSize[i]);
	printf("\nEnter no. of processes: ");
	scanf("%d", &PNum);
	printf("Enter size of each process:\n");
	for(i = 0; i < PNum; i++)
		scanf("%f", &ProcessSize[i]);
	for(i = 0; i < PNum; i++)         //allocation as per first fit
		for(j = 0; j < HNum; j++)
			if(flags[j] == 0 && HoleSize[j] >= ProcessSize[i])
			{
				allocation[j] = i;
				flags[j] = 1;
				break;
			}
	//display allocation details
	printf("\nHole No.\tSize\t\t\tProcess No.\t\tSize");
	for(i = 0; i < HNum; i++)
	{
		printf("\n%d\t\t%f\t\t", i+1, HoleSize[i]);
		if(flags[i] == 1)
			printf("%d\t\t\t%f",allocation[i]+1,ProcessSize[allocation[i]]);
		else
			printf("Not Allocated");
	}
}
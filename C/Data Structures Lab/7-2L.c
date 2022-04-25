/*
Akshit Gandotra
Question 2 (Lab)
Read the numbers from a text file sort them into an array
using 'Quick Sort' algorithm and write back in another text file.
*/

#include <stdio.h>
#define Num 100
static int count = 0;

void ReadFile(int *array)
{
	FILE *fp = fopen("d1.txt", "r");
	
	while(1)
    {
		if(feof(fp))
        {
			break;
		}
		fscanf(fp, "%d", &array[count]);
		count++;
	}
	
	fclose(fp);
	printf("\t**FILE read Successfully**\n");	
}

void swap(int *array, int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp; 
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

void DataDisplay(int *array)
{
	for(int i=0; i<count; i++)
    {
		printf("%d ",*(array+i));
	}
}

void WriteFile(int *array)
{
	FILE *fptr;
	fptr = fopen("d2.txt","wb");
	for(int i=0; i<count; i++)
    {
		putw(*(array+i), fptr);
	}
	fclose(fptr);
}

void main()
{
	int array[Num];
	ReadFile(array);
	
	printf("Original Data:\n");
	DataDisplay(array);

    QuickSort(array, count);
	printf("\n\nSorted Data:\n");
	DataDisplay(array);

	WriteFile(array);
}
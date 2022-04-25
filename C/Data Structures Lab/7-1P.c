/*
Akshit Gandotra
Question 1 (Practice)
Read the numbers from a text file sort them into an array
using 'Selection Sort' algorithm and write back in another text file.
*/

#include <stdio.h>
#define Num 100
static int count = 0;

void ReadFile(int *array) {
	FILE *fp = fopen("d1.txt","r");
	
	while(1) {
		if(feof(fp)) {
			break;
		}
		fscanf(fp, "%d", &array[count]);
		count++;
	}
	
	fclose(fp);
	printf("\t**FILE read Successfully**\n");	
}

void swap(int *array, int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp; 
}

void SelectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
void DataDisplay(int *array) {
	for(int i=0; i<count; i++) {
		printf("%d ",*(array+i));
	}
}

void WriteFile(int *array) {
	FILE *fptr;
	fptr = fopen("d2.txt","wb");
	for(int i=0; i<count; i++) {
		putw(*(array+i), fptr);
	}
	fclose(fptr);
}

void main() {
	int array[Num];
	ReadFile(array);
	
	printf("Original Data:\n");
	DataDisplay(array);

     SelectionSort(array, count);
	printf("\n\nSorted Data:\n");
	DataDisplay(array);

	WriteFile(array);
}

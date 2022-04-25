/*
Akshit Gandotra
Question 2 (Practice)
Read the numbers from a text file sort them into an array
using 'Merge Sort' algorithm and write back in another text file.
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

void merge(int arr[], int l, int m, int r) {
    	int i, j, k;
    	int n1 = m - l + 1;
    	int n2 = r - m;
    	int L[n1], R[n2];
for (i = 0; i < n1; i++)
       	L[i] = arr[l + i];
    	for (j = 0; j < n2; j++)
        	R[j] = arr[m + 1 + j];
i = 0; 
    	j = 0; 
    	k = l; 
    	while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
  
while (i < n1) {
       	 arr[k] = L[i];
        	i++;
        	k++;
    } while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
  
void MergeSort(int arr[], int l, int r) {
    if (l < r) {  
int m = l + (r - l) / 2;
        	MergeSort(arr, l, m);
        	MergeSort(arr, m + 1, r);
  
        merge(arr, l, m, r);
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

     MergeSort(array, count);
	printf("\n\nSorted Data:\n");
	DataDisplay(array);

	WriteFile(array);
}

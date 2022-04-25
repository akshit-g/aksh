/*
Akshit Gandotra
Question 1 (Lab)
Using Array and functions implement Doubly Ended Queue (Input Restricted Queue and Output Restricted Queue) and its operations.
*/

#include<stdlib.h>
#include<stdio.h>
struct HeaderList //Structure created
{
	char HeaderData[100];
	int data;
	struct HeaderList *next;
	struct HeaderList *prev;
};

void input(struct HeaderList **start , int N)  //function to input data in the list
{
	struct HeaderList *New = (struct HeaderList *)malloc(sizeof(struct HeaderList));
	printf("Enter the Heading of the list\n");
	scanf("%s", &New -> HeaderData);
	New -> next = NULL;
	*start = New;
	
	for(int i = 1; i <= N; i++)
	{
		New -> next = (struct HeaderList *)malloc(sizeof(struct HeaderList));
		struct HeaderList *temp = New;
		New = New -> next;
		New -> prev = temp;
		printf("Enter a Number\n");
		scanf("%d", &New -> data);
		New -> next = NULL;
	}
}

void Display(struct HeaderList *Start)  //function to display the list
{
	printf("\nThe List is :- \n");
	struct HeaderList *temp = Start;
	puts(temp -> HeaderData);
	temp = temp -> next;
	while(temp != NULL)
	{
		printf("%d\n", temp -> data);
		temp = temp -> next;
	}
}

void Search(struct HeaderList *Start , int data)  //function to perform linear search on the list
{
	struct HeaderList *temp = Start;
	while(temp != NULL)
	{
		if(temp -> data == data)
		{
			printf("%d Found in the List\n" , data);
			return;
		}
		temp = temp -> next;
	}
	printf("%d Not Found in the List\n" , data);
}

void main()
{
	struct HeaderList *Head = NULL;
	int N;
	printf("Enter the Size of the List\n");
	scanf("%d", &N);
	input(&Head , N);
	Display(Head);
	int num;
	printf("Enter a number to Search in the List.\n");
	scanf("%d" , &num);
	Search(Head , num);
}
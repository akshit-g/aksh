/*
Akshit Gandotra
Question 3 (Practice)
Implement Circular Linked list and its operations
*/

#include<stdio.h>
#include<stdlib.h>

struct node  // structure initialization
{
	int data;
	struct node *next;
};
struct node *head;

// function declaration
void beginsert ();
void lastinsert ();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void main ()

{
	int choice = 0;
	while(choice != 7)
	{
		printf("\nChoose one option from the following list\n");
		printf("1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Search for an element\n6.Show\n7.Exit\n");
		printf("Enter your choice:\n");  
		scanf("\n%d", &choice);
		switch(choice)
		{
			case 1:
			beginsert();
			break;

			case 2:
			lastinsert(); 
			break;

			case 3:
			begin_delete();
			break;

			case 4:
			last_delete();
			break;

			case 5:
			search();
			break;

			case 6:
			display();
			break;

			case 7:
			exit(0);
			break;

			default:
			printf("Please enter valid choice");  
		}
	}
}

// insert at beginning
void beginsert()
{
	struct node *ptr, *temp;
	int item;
	ptr = (struct node *)malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("Enter the node data:\t");
		scanf("%d", &item);
		ptr -> data = item;
		if(head == NULL)
		{
			head = ptr;
			ptr -> next = head;
		}
		else
		{
			temp = head;
			while(temp -> next != head)
				temp = temp -> next;
			ptr -> next = head;
			temp -> next = ptr;
			head = ptr;
		}
		printf("Node Inserted\n");
	}
}

// insert at last
void lastinsert()
{
	struct node *ptr, *temp;
	int item;
	ptr = (struct node *)malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("\nOVERFLOW\n");
	}
	else
	{
		printf("\nEnter Data: \t");
		scanf("%d", &item);
		ptr -> data = item;
		if(head == NULL)
		{
			head = ptr;
			ptr -> next = head;
		}
		else
		{
			temp = head;
			while(temp -> next != head)
			{
				temp = temp -> next;
			}
			temp -> next = ptr;
			ptr -> next = head;
		}
		printf("\nNode Inserted\n");
	}
}

// delete at beginning
void begin_delete()
{
	struct node *ptr;
	if(head == NULL)
	{
		printf("\nUNDERFLOW");  
	}
	else if(head -> next == head)
	{
		head = NULL;
		free(head);
		printf("\nNode Deleted\n");
	}

	else
	{
		ptr = head;   
		while(ptr -> next != head)
		{
			ptr = ptr -> next;
		}
		ptr -> next = head -> next;
		free(head);
		head = ptr -> next;
		printf("\nNode Deleted\n");
	}
}

// delete at last
void last_delete()
{
	struct node *ptr, *preptr;
	if(head == NULL)
	{
		printf("\nUNDERFLOW");
	}
	else if (head -> next == head)
	{
		head = NULL;
		free(head);
		printf("\nNode Deleted\n");

	}
	else
	{
		ptr = head;
		while(ptr -> next != head)
		{
			preptr = ptr;
			ptr = ptr -> next; 
		}
		preptr -> next = ptr -> next;
		free(ptr);
		printf("\nNode Deleted\n");
	}
}

// search list
void search()
{
	struct node *ptr;
	int item, i = 0, flag = 1;
	ptr = head;
	if(ptr == NULL)
	{
		printf("\nEmpty List\n");
	}
	else
	{
		printf("\nEnter item which you want to search?\n");
		scanf("%d", &item);
		if(head -> data == item)
		{
			printf("item found at location %d", i+1);
			flag = 0;
		}
		else
		{
			while (ptr -> next != head)
			{
				if(ptr -> data == item)
				{
					printf("item found at location %d ", i+1);
					flag = 0;
					break;
				}
				else
				{
					flag = 1;
				}
				i++;
				ptr = ptr -> next;
			}
		}
		if(flag != 0)
		{
			printf("Item not found\n");
		}
	}
}

// traverse list
void display()
{
	struct node *ptr;
	ptr = head;
	if(head == NULL)
	{
		printf("\nEmpty");
	}
	else
	{
		printf("The values are: \n");
	
		while(ptr -> next != head)
		{
			printf("%d\n",  ptr -> data);
			ptr = ptr -> next;
		}
		printf("%d\n",  ptr -> data);
	}
}
/*
Akshit Gandotra
Question 2 (Practice)
Create a Sorted Linked List. Implement insertion and searching operation on the Linked List. Also write a function display to print the current state of the list. 
*/

#include <stdio.h>
#include <stdlib.h>
struct node  // structure initialization
{
	int data;
	struct node *next;
}*Head;

void create_node(int n)  // linked list creation
{
  struct node *add, *store;
  Head = (struct node *)malloc(sizeof(struct node));
  if(Head == NULL)
  {
    printf("Memory cannot be allocated.\n");
    return;
  }
  printf("Enter data for the node Number 1.\n");
  int new_data;
  scanf("%d", &new_data);
  Head -> data = new_data;
  Head -> next = NULL;
  store = Head;
  for(int i = 1; i<n; i++)
  {
    add = (struct node *)malloc(sizeof(struct node));
    if(add == NULL)
    {
      printf("Memory cannot be allocated.\n");
      break;
    }
    else
    {
      printf("Enter data for the node Number %d.\n", (i+1));
      scanf("%d", &new_data);
      add -> data = new_data;
      add -> next = NULL;
      store -> next = add;
      store = store -> next;
    }
  }
}

void display(struct node *start)  // display linked list
{
	struct node *ptr;
	ptr = start;
	printf("Current List is:\n");
	while(ptr != NULL)
	{
		printf("%d \t", ptr -> data);
		ptr = ptr -> next;
	}
	printf("\n");
}

void insert_begin(struct node *start, int item)  // inserting an element in the begining of the list
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode -> data = item;
  newnode -> next = Head;
  Head = newnode;
}
 
void insert_end(struct node *start, int item)  // inserting an element in the end of the list
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  struct node *Lastnode = Head;
  newnode -> data = item;
  newnode -> next = NULL; 
  if(Head == NULL)
  {
    Head = newnode;
    return;
  }
  while(Lastnode -> next != NULL)
  {
    Lastnode = Lastnode -> next;
  }
  Lastnode -> next = newnode;
}

void insert_pos(struct node *start, int item, int pos)  // inserting an element at a given position in the list
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode -> data = item;
  if(Head == NULL)
  {
    Head = newnode;
    newnode -> next = NULL;
    return;
  }
  struct node *prenode = Head;
  while(1)
  {
    if(pos -2 == 0)
    break;
    prenode = prenode -> next;
    pos--;
  }
  newnode ->  next = prenode -> next;
  prenode -> next = newnode;
}

void search(struct node *start, int item)  // searching a number in the list.
{
  int flag = 0;
  int pos = 1;
  struct node *temp = start;
  while(1)
  {
    if(temp -> data == item)
    {
        printf("%d found in the List at position %d.\n", item, pos);
        flag++;
        return;
    }
    pos++;
    temp = temp -> next;
  }
  if(flag == 0)
  printf("%d not found in the List.\n", item);
}

int main()
{
	printf("Enter the number of nodes in the List.\n");
  int n;
  scanf("%d", &n);
  printf("Create a List in a Sorted Way.\n");
  create_node(n);  // create list
  display(Head);  // display list
	int choice, item, search_item, pos;
	while(1)
  {
	  printf("1. Insert a Number \n2. Search for a Number \n3. Display the List \n4. EXIT\n");
	  scanf("%d", &choice);
	  switch(choice)
	  {
		  case 1:
		  printf("Enter choice to:- \n1.Insert at beginning\n2. Insert at end\n3. Insert at a position \n");
		  int choice1;
		  scanf("%d", &choice1);
		  switch(choice1)
		  {
		    case 1:
		    printf("Enter Item to be inserted at the Beginning.\n ");
		    scanf("%d", &item);
		    insert_begin(Head, item);
		    display(Head); //Inserting a number in the beginning
		    break;

		    case 2:
		    printf("Enter Item to be inserted at the end\n");
		    scanf("%d", &item);
		    insert_end(Head, item); //Inserting a number at the end.
		    display(Head);
		    break;

		    case 3:
		    printf("Enter Item to be inserted at a given position\n");
		    scanf("%d", &item);
		    printf("Enter position at which you want to insert\n");
		    scanf("%d", &pos);
		    insert_pos(Head, item, pos);  //Inserting a number at a given position
		    display(Head);
		    break;

		    default :
		    printf("Incorrect Choice.\n");
		    break;
		  }
		  break;

		  case 2:
		  printf("Enter a Number to Search in the List.\n");
		  scanf("%d" , &search_item);
		  search(Head , search_item);  //Searching a number in the list
		  break;
  
		  case 3:
		  display(Head);  //Display the list
		  break;
  
		  case 4:
		  exit(0);

		  default:
		  printf("Not a valid entry. Choose between 1-8 only\n");
		    
	  }
	}
}

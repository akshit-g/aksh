/*
Akshit Gandotra
Question 1 (Practice)
Add two polynomials using Linked List
*/

#include <stdio.h>
#include<stdlib.h>

// structure for a single node of linked list
typedef struct Poly {
	int coeff, pow; 
	struct Poly *next; 
}poly;

// function declaration
void create_poly(poly **head);
void display_poly(poly *head);
void add_poly(poly *pol1, poly *pol2, poly **poly3);

//driver function
int main() {

	// creating three empty linked list
	poly *polynomial1, *polynomial2, *polynomial3;
	polynomial1 = polynomial2 = polynomial3 = NULL;

	// store first polynomial
	printf("Enter the first polynomial : \n");
	create_poly(&polynomial1); 

	// store second polynomial
	printf("\nEnter the second polynomial : \n");
	create_poly(&polynomial2);

	// add two polynomial
	add_poly(polynomial1, polynomial2, &polynomial3);

	// display
	printf("\nThe first polynomial is : \n");
	display_poly(polynomial1);
	printf("\nThe second polynomial is : \n");
	display_poly(polynomial2);
	printf("\nThe result is :\n");
	display_poly(polynomial3);
	return 0 ;
}

// create a linked list to store a polynomial
// enter data in a decreasing order of degree
void create_poly(poly **head) {
	poly *temp = *head, *new;
	int coff, pow;
	int choice; 
	do {
		// enter data of a single term
		printf("Enter the coefficient: ");
		scanf("%d", &coff);
		printf("Enter the power: ");
		scanf("%d", &pow);

		// create a new node to be added
		new = (poly *)malloc(sizeof(poly));

		//fill data in the newly created node
		new -> coeff = coff;
		new -> pow = pow;
		new -> next = NULL;

		// if list is empty (adding first term of polynomial)
		if(temp == NULL) {
			*head=new;
		}
		// add second term onwards
		else {
			temp -> next = new;
		}
		temp = new;

		// if any more term is left to be added
		printf("Enter '1' to continue or '0' to exit\n");
		scanf("%d", &choice);
	} while(choice == 1);
}


// display polynomial
void display_poly(poly *head) {
	poly *temp = head;
	while (temp -> next != NULL) {
		// displays the coefficient and power of node
		printf("%dx^%d", temp -> coeff, temp -> pow);
		temp = temp -> next;  // points to next
		if (temp -> coeff >= 0) {
			// for adding " + " operator between two terms
			printf(" + ");
		}
	}
	printf("%dx^%d", temp->coeff, temp->pow);
}

// function to add polynomial
void add_poly(poly *pol1,  poly *pol2,  poly **pol3) {
	poly *new, *ptr = *pol3;
	while(pol1 && pol2) {
		// create new node
		new = (poly *)malloc(sizeof(poly));
		new -> next = NULL;

		// if polynomial has a greater degree term
		if(pol1 -> pow > pol2 -> pow) {
			new -> pow = pol1 -> pow;
			new -> coeff = pol1 -> coeff;
			pol1 = pol1 -> next;    
		}

		// if polynomial has a greater degree term
		else if(pol2 -> pow > pol1 -> pow) {
			new -> pow = pol2 -> pow;
			new -> coeff = pol2 -> coeff;
			new = pol2 -> next; 
		}

		// if both the polynomial have same degree terms
		else {
			new -> coeff = pol1 -> coeff + pol2 -> coeff;
			new -> pow = pol1 -> pow;
			pol1 = pol1 -> next;
			pol2 = pol2 -> next;
			// skip the term having 0 coefficient
			// do not add in the list and move to next term
			if(!new -> coeff)
			continue;
		}

		// adding first term in the list
		if(*pol3 == NULL) {
			*pol3 = new;
		}

		// add second term onwards
		else {
			ptr -> next = new;
		}  

		// move ptr to point recently added node in the list
		ptr = new;
	}

	// to add terms of remaining polynomial
	while(pol1 || pol2) {
		new = (poly *)malloc(sizeof(poly));
		new -> next = NULL;

		//if polynomial has more number of terms
		if(pol1) {
		new -> coeff = pol1 -> coeff;
		new -> pow = pol1 -> pow;
		pol1 = pol1 -> next;
		}

		//if polynomial has more number of terms
		if(pol2) {
		new -> coeff = pol2 -> coeff;
		new -> pow = pol2 -> pow;
		pol2 = pol2 -> next;
		}

		//update ptr to point the recently added term in the list
		ptr -> next = new;
		ptr = new;
	}
}
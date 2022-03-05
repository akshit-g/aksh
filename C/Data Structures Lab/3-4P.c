/*
Akshit Gandotra
Question 4 (Practice)
Implement Doubly Linked list and its operations
*/


#include <stdio.h>
#include <stdlib.h>

// structure initialization
struct node {
    int data;
    struct node *next;
    struct node *prev;
};

// global head node
struct node *head = NULL;

// function declaration
void createList(int);
void displayList();
void traverseRev();
void insertBeg(struct node *);
void insertEnd(struct node *);
void deleteBeg();
void deleteEnd();
void menu();
void evaluateChoice(int);

// driver code
void main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createList(n);

    menu();
}

// menu function using do-while loop
void menu() {
    int choice;
    for (;;) {
        printf("1. INSERT node at Beginning\n");
        printf("2. INSERT node at End\n");
        printf("3. DELETE node at Beginning\n");
        printf("4. DELETE node at End\n");
        printf("5. DISPLAY list in Forward direction\n");
        printf("6. DISPLAY list in Backward direction\n");
        printf("7. Exit\n\n");

        printf("Enter choice (1-7): ");
        scanf("%d", &choice);

        evaluateChoice(choice);

        printf("\n");
        system("pause");
    }
}

// function to evaluate the user input
void evaluateChoice(int n) {
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));

    switch(n) {
        case 1:
            printf("Enter node to insert at beginning: ");
            scanf("%d", &new -> data);
            insertBeg(new);
            break;

        case 2:
            printf("Enter node to insert at beginning: ");
            scanf("%d", &new -> data);
            insertEnd(new);
            break;

        case 3:
            deleteBeg();
            break;

        case 4:
            deleteEnd();
            break;

        case 5:
            displayList();
            break;

        case 6:
            traverseRev();
            break;

        case 7:
            exit(0);

        default:

            printf("Invalid choice entered!");
    }
}

// create list
void createList(int n) {
    struct node *temp, *curr;

    for (int i = 0; i < n; i++) {
        curr = (struct node *)malloc(sizeof(struct node));
        printf("Enter node #%d: ", (i + 1));
        scanf("%d", &curr -> data);

        if (i == 0) {
            head = temp = curr;
            head -> prev = NULL;
        }
        else {
            temp -> next = curr;
            curr -> prev = temp;
            temp = curr;

        }
    }
    temp -> next = NULL;
}

// display list
void displayList() {
    struct node *temp;

    temp = head;

    if (head == NULL) {
        printf("No nodes to print!\n");
        return;
    }
    else {
        printf("\n");
        while (temp != NULL) {
            printf("%d ", temp -> data);
            temp = temp -> next;
        }
    }
}

// insert at beginning
void insertBeg(struct node *new) {
    new -> prev = NULL;

    if (head == NULL) {
        new = head;
        return;
    }
    else {
        head -> prev = new;
        new -> next = head;

        head = new;
    }
}

// insert at end
void insertEnd(struct node *new) {
    new -> next = NULL;
    struct node *temp;
    temp = head;

    if (head == NULL) {
        new = head;
        return;
    }
    else {
        while (temp -> next != NULL) {
            temp = temp -> next;
        }
        temp -> next = new;
        new -> prev = temp;
    }
}

// delete at beginning
void deleteBeg() {
    struct node *temp;
    temp = head;

    if (head == NULL) {
        printf("No nodes present to delete!");
        return;
    }
    else {
        head = head -> next;
        temp -> next = NULL;
        head -> prev = NULL;
    }
}

// delete at end
void deleteEnd() {
    struct node *curr, *nextNode;
    curr = nextNode = head;

    if (head == NULL) {
        printf("No nodes to delete!");
        return;
    }
    else {
        while (nextNode -> next != NULL) {
            curr = nextNode;
            nextNode = nextNode -> next;
        }
        if (nextNode == NULL) {
            head = NULL;
        }
        else {
            nextNode -> prev = NULL;
            curr -> next = NULL;
        }
    }
}

// traverse list
void traverseRev() {
    struct node *temp;
    temp = head;

    if (head == NULL) {
        printf("No nodes");
        return;
    }
    else {
        printf("\n");
        while (temp -> next != NULL) {
            temp = temp -> next;
        }

        while (temp != NULL) {
            printf("%d ", temp -> data);
            temp = temp -> prev;
        }
    }
}
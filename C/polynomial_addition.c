#include<stdio.h>
#include <stdlib.h>
struct node
{
  int coif;
  int expo;
  struct node* link;
};

struct node* insert(struct node* head,int coif, int expo){
struct node * temp;
struct node * newp = malloc(sizeof(struct node));
newp->coif = coif;
newp->expo=expo;
newp->link=NULL;
if(head==NULL||expo>head->expo){
  newp->link=head;
  head=newp;
}
else
{
  temp=head;
  while(temp->link!=NULL && temp->link->expo>expo){
    temp=temp->link;

  }
  newp->link=temp->link;
  temp->link=newp;

}
return head;

}



struct node* create(struct node* head)
{
int n,i,expo;
int coif;
printf("Enter the number of terms\n");
scanf("%d",&n);
for(i=0;i<n;i++){
  printf("Enter the coiffichent\n");
  scanf("%d",&coif);
  printf("Enter the Exponent\n");
  scanf("%d",&expo);
  head=insert(head,coif,expo);
}
return head;
}

void print(struct node* head){
  if (head==NULL){
    printf("No pollynomial\n");

  }
  else{
    struct node*temp=head;
    while(temp!=NULL){
      printf("(%dx^%d)",temp->coif,temp->expo);
      temp=temp->link;
      if(temp!=NULL){
        printf(" + ");
        }
        else
       { printf("\n");}
      }
    }
  }


 void add(struct node* head1, struct node*head2){
   struct node*ptr1=head1;
   struct node*ptr2 =head2;
   struct node*head3=NULL;
   while(ptr1!=NULL && ptr2!=NULL)
     {
       if(ptr1->expo==ptr2->expo){
         head3=insert(head3,(ptr1->coif+ptr2->coif),ptr1->expo);
         ptr1=ptr1->link;
         ptr2=ptr2->link;
       }
       else if(ptr1->expo>ptr2->expo){
           head3=insert(head3,ptr1->coif,ptr1->expo);
           ptr1=ptr1->link;
       }
          else if(ptr1->expo<ptr2->expo){
           head3=insert(head3,ptr2->coif,ptr2->expo);
           ptr2=ptr2->link;
     }


   }
   while(ptr2!=NULL){
     head3=insert(head3,ptr2->coif,ptr2->expo);
      ptr2=ptr2->link;
   }
   while(ptr1!=NULL){
     head3=insert(head3,ptr1->coif,ptr1->expo);
      ptr1=ptr1->link;
   }
   printf("Added polynomial:\n");
   print(head3);
 }

 

int main(){
  struct node*head=NULL;
  struct node*head2=NULL;
  printf("enter the 1st polynomial\n");
  head=create(head);
  print(head);
  printf("enter the 2nd polynomial\n");
  head2=create(head2);
  print(head2);
  add(head,head2);
  
  return 0;
}
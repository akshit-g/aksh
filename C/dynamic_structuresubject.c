#include <stdio.h>
#include <stdlib.h>
struct subject // initialize structure
{
  int code;
  char subject[30];
};

int main()
{
  struct subject *ptr;
  int totalrecords;
  printf ("Enter the number of records: \n"); // input records
  scanf ("%d", &totalrecords);

  // Memory allocation for totalrecords structures
  ptr = (struct subject*) malloc (totalrecords * sizeof(struct subject)); // allocate memory
  for (int i = 0; i < totalrecords; ++i)
  {
    printf("Enter subject and code:\n"); // input data
    scanf("%s %d", (ptr + i) -> subject, &(ptr + i) -> code);
  }

  printf ("Displaying Information:  \n"); // display data
  for (int i = 0; i < totalrecords; ++i)
  {
    printf("%s \t %d \n", (ptr + i) -> subject, (ptr + i) -> code);
  }

  free(ptr);

  return 0;
}
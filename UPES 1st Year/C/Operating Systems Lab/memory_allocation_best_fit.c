#include<stdio.h>

void main()
{
    int a[20], p[20], i, j, n, m;
    printf("Enter no. of Holes: \n");
    scanf("%d", &n);
    for(i = 0 ; i < n ; i++)
{
    printf("Enter Hole size %d:    ", i);
    scanf("%d", &a[i]);
}
printf("\nEnter no. of Process:\n");
scanf("%d", &m);
for(i = 0 ; i < m ; i++)
{
    printf("Enter the size Process %d:  ", i);
    scanf("%d", &p[i]);
}
for(i=0;i<n;i++)
{
    for(j=0 ; j < m ; j++)
    {
        if(p[j] <= a[i])
        {
            printf("\n\nThe Process %d(%d) allocated to %d\n", j, p[i], a[i]);
            p[j]=10000;
            break;
            
        }
        
    }
}
for(j = 0 ; j < m ; j++)
{
    if(p[j] != 10000)
    {
        printf("The Process %d is not allocated\n", j);
        
    }
}
}
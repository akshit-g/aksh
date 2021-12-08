/******************************
Program to find sum of array
******************************/

#include <stdio.h>
#include <stdlib.h>

int max(int a[],int b,int x)
{
    if(a[x]!='\0'){
        return a[x]+max(a,b,x+1);
    }
}

int main()
{
    int a[30],b,x,c;
    scanf("%d",&b);
    for(x=0;x<b;x++){
        scanf("%d",&a[x]);
    }
    x=0;
    c=max(a,b,0);
    printf("%d",c);
}
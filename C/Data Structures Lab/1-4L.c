/*
Akshit Gandotra
Question 4 (Lab)
Program to calculate the sum of Rows and Columns of a Matrix of order(row*column)
*/
#include <stdio.h>
void input(int *A , int R , int C)         //Function input to input the elements of the Array
{
    for(int i = 0 ; i<R ; i++)
    {
        for(int j = 0 ; j<C ; j++)
        {
            printf("Enter a Number \n");
            scanf("%d" , ((A+i*C)+j) );     //Accepting input from the user
        }
    }
}
void display(int *A , int R , int C)       //Function display to display the Array
{
    for(int i = 0 ; i<R ; i++)             //Loop to access all the indexies of the Array
    {
        for(int j = 0 ; j<C ; j++)    
        printf("%d \t " , *((A+i*C)+j));              
        printf(" \n ");
    }
}


void RowSum(int *A , int R , int C)        //Function RowSum to calculate the sum of each row
{
    for(int i = 0 ; i<R ; i++)          
    {
        int sum = 0;
        for(int j = 0 ; j<C ; j++)
        sum += *((A+i*C)+j);               //Calculating the sum of Rows
        printf("The sum of Row Number %d is %d \n", (i+1) , sum);   //Displaying the sum
    }
}

void ColumnSum(int *A , int R , int C)     //Function ColumnSum to calculate the sum of each column
{
    for(int i = 0 ; i<C ; i++)           
    {
        int sum = 0;
        for(int j = 0 ; j<R ; j++)
        sum += *((A+i*C)+j);              ////Calculating the sum of columns
        printf("The sum of Column Number %d is %d \n", (i+1) , sum); //Displaying the sum
    }
}

int main()
{
    int row, column;
    printf("Enter the Number of rows and columns in a Matrix \n ");
    scanf("%d %d", &row , &column);
    int Arr[row][column];
    input((int *)Arr , row , column);    //Calling the function input to input the elements of the Array
    display((int *)Arr , row , column);  //Calling the function display to display the Array
    RowSum((int *)Arr , row , column);   //Calling the function RowSum to calculate the sum of each row
    ColumnSum((int *)Arr , row , column);//Calling the function ColumnSum to calculate the sum of each column
}

#include<stdio.h>
#include<conio.h>
void main()
{
    int size,i,j,temp;
    printf("enter size of matrix:-\n ");
    scanf("%d",&size);

int arr[size][size];

printf("enter elements in matrix:- \n");

   for(i=0;i<size;i++)
   {
       for(j=0;j<size;j++)
       {
           scanf("%d",&arr[i][j]);
       }
   }
   int n=size-1;

   for(i=0;i<size;i++)
   {
       for(j=0;j<size;j++)
       {
           if(i==j)
           {
            temp=arr[i][j];
            arr[i][j]=arr[i][n];
            arr[i][n]=temp;
            n--;
           }
       }
   }
   printf("after interchange diagonals:-\n");
   for(i=0;i<size;i++)
   {
       for(j=0;j<size;j++)
       {
           printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
}

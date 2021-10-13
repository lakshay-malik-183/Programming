#include<stdio.h>
#include<conio.h>
void main()
{
    int size,i,j;
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
   for(i=0;i<size;i++)
   {  int sum=0;
       for(j=0;j<size;j++)
       {
           sum=sum+arr[i][j];
       }
       printf("sum of row %d = %d\n",i+1,sum);
   }

   for(i=0;i<size;i++)
   {  int sum=0;
       for(j=0;j<size;j++)
       {
           sum=sum+arr[j][i];
       }
       printf("sum of coloumn %d = %d\n",i+1,sum);
   }
}

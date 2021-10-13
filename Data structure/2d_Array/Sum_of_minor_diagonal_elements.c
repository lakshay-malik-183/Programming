#include<stdio.h>
#include<conio.h>
void main()
{
    int size,i,j,sum=0;;
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
{
    for(j=0;j<size;j++)
    {
        if(i+j==size-1)
        {
            sum=sum+arr[i][j];
        }
    }
}
printf("sum= %d",sum);
}

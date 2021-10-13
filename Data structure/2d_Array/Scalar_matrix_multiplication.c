#include<stdio.h>
#include<conio.h>
void main()
{
    int size,n,i,j;

    printf("enter size of matrix: \n");
    scanf("%d",&size);

    int arr[size][size];
    printf("enter elements in matrix;- \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("enter number which you want to multiply whole matrix:- \n");
    scanf("%d",&n);

    printf("scalar multiplication of matrix:-\n ");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            arr[i][j]=n*arr[i][j];
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,size;
    printf("enter size of matrix:- ");
    scanf("%d",&size);
    int arr1[size][size];
    int arr2[size][size];
    int arr3[size][size];

    printf("enter elements in first matrix\n");

    for(i=0;i<size;i++)
    {

        for(j=0;j<size;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("enter elements in 2nd matrix: \n");

    for(i=0;i<size;i++)
    {

        for(j=0;j<size;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<size;i++)
    {

        for(j=0;j<size;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("addition of both matrices:- \n");

    for(i=0;i<size;i++)
    {

        for(j=0;j<size;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}

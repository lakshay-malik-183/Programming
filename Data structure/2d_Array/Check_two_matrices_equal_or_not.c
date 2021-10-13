#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,size,flag=0;
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
        if(arr1[i][j]!=arr2[i][j])
        {
            flag=1;
            break;
        }
    }
}
if(flag==1)
    printf("matrices not equal");
else
    printf("both matrices are equal");
}

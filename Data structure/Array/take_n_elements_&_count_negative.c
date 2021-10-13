#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,count=0;

    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter element-\n ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            count++;
        }
    }
    printf("total negative numbers:-  %d ",count);
}

#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,count=0;
printf("enter size of array ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("enter element:-\n ");
scanf("%d",&arr[i]);
}

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            count++;
        }
    }
    printf("%d\n",count);
    count=0;
}
}

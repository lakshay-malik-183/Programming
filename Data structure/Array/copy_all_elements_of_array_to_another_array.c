#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
printf("enter size of array ");
scanf("%d",&n);
int arr[n];

for(i=0;i<n;i++)
{
printf("enter element:-\n ");
scanf("%d",&arr[i]);
}

int arr1[n];

for(i=0;i<n;i++)
{
    arr1[i]=arr[i];
}
printf("copied elements from array 1 to array 2 are: \n");
for(i=0;i<n;i++)
{
    printf("%d\n",arr1[i]);
}
}

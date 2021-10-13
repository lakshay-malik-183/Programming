#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
printf("enter size of array");
scanf("%d",&n);
int arr[n];

for(i=0;i<n;i++)
{
printf("enter element:-\n ");
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}

#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
int n,i,max=INT_MIN;
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
    if(arr[i]>max)
    {
        max=arr[i];
    }
}
int largest=max;
max=INT_MIN;
for(i=0;i<n;i++)
{
    if(arr[i]>max && arr[i]<largest)
    {
        max=arr[i];
    }
}
printf("second largest= %d",max);
}

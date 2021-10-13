#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,val;
printf("enter size of array ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("enter element:-\n ");
scanf("%d",&arr[i]);
}
int temp=arr[0];
for(i=0;i<n-1;i++)
{
    arr[i]=arr[i+1];
}
arr[n-1]=temp;
for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}

}

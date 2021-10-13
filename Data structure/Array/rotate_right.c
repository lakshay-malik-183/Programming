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
int temp=arr[n-1];
for(i=n-1;i>0;i--)
{
    arr[i]=arr[i-1];
}
arr[0]=temp;
for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}

}


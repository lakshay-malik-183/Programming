#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,val,temp;
printf("enter size of array ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("enter element:-\n ");
scanf("%d",&arr[i]);
}

for(i=0,j=n-1;i<j;i++,j--)
{
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}

}

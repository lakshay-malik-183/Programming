#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,val;
printf("enter size of array");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("enter element:-\n ");
scanf("%d",&arr[i]);
}

int pos;
printf("enter position at which you want to delete: \n");
scanf("%d",&pos);

if(pos<=n && pos>=1)
{
for(i=pos-1;i<n-1;i++)
{
    arr[i]=arr[i+1];
}
}
else
{
    printf("entered position not exist ");
}

for(i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
}

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
printf("enter position at which you want to insert: \n");
scanf("%d",&pos);

if(pos<=n && pos>=1)
{
for(i=n-1;i>pos-1;i--)
{
    arr[i]=arr[i-1];
}
}
else
{
    printf("entered position not exist ");
}
printf("entered element you want to insert:- ");
scanf("%d",&val);
arr[pos-1]=val;

for(i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
}

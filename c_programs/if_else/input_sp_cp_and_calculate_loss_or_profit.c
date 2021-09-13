#include<stdio.h>
#include<conio.h>
void main()
{
int cp,sp,temp;

printf("enter cost price:- ");
scanf("%d",&cp);

printf("enter selling price:- ");
scanf("%d",&sp);

if(cp>sp)
{
temp=cp-sp;
printf("loss= %d ",temp);
}
else if(cp<sp)
{
temp=sp-cp;
printf("profit= %d",temp);
}

else
printf("no loss , no profit");
}

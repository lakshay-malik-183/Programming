#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter month no. from 1 to 12 : ");
scanf("%d",&n);

if(n==1)
printf("january=31 days");
else if(n==2)
printf("february=28 days");
else if(n==3)
printf("march=31 days");
else if(n==4)
printf("april=30 days");
else if(n==5)
printf("may=31 days");
else if(n==6)
printf("june=30 days");
else if(n==7)
printf("july=31 days");
else if(n==8)
printf("august=31 days");
else if(n==9)
printf("september=30 days");
else if(n==10)
printf("october=31 days");
else if(n==11)
printf("november=30 days");
else if(n==12)
printf("december=31 days");
 else
printf("wrong input");
}

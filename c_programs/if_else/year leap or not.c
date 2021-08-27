#include<stdio.h>
#include<conio.h>
void main()
{
int n;

printf("enter a year: ");
scanf("%d",&n);

if(n%4==0)
{
printf("year is leap year");
}
else
printf(" not a leap year");
}

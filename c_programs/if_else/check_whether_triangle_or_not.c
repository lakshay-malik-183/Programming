#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter 3 angles of triangle:-\n ");
scanf("%d %d %d",&a,&b,&c);

if(a+b+c==180)
{
printf("triangle is valid");
}
else
printf("not a triangle");
}

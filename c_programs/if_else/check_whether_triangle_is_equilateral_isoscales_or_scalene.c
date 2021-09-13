#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c;

printf("enter 3 sides of triangle:- \n");
scanf("%d %d %d",&a,&b,&c);

if(a==b && a==c)
printf("equilateral triangle");

else if(a==b && a!=c || b==c && b!=a || a==c && a!=b)
printf(" isoscales triangle");

else
printf("scalene riangle");

}

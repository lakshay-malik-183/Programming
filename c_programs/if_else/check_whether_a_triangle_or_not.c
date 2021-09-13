#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c;

printf("enter 3 sides of a triangle:- \n");
scanf("%d %d %d",&a,&b,&c);

if(a+b>c || b+c>a || a+c>b)

printf("valid triangle");

else
printf("invalid triangle");
}

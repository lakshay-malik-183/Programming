#include<stdio.h>
#include<conio.h>
void main()

{
int salary,gross,temp;

printf("enter basic salary:= ");
scanf("%d",&salary);

if(salary<=10000)
{
temp=(salary*100)/100;
gross=salary+temp;
printf("gross salary:- %d",gross);
}

else if(salary>10000 && salary<20000)
{
temp=(salary*115)/100;
gross=salary+temp;
printf("gross salary:- %d",gross);
}

else if(salary>=20000)
{
temp=(salary*125)/100;
gross=salary+temp;
printf("gross salary:- %d",gross);
}

}

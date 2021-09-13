#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0,rem=0;
printf("enter a amount: ");
scanf("%d",&n);

count=n/500;
printf("500 notes are:- %d \n",count);
rem=n%500;
n=rem;

count=n/100;
printf("100 notes are:- %d \n",count);
rem=n%100;
n=rem;

count=n/50;
printf("50 notes are:- %d \n ",count);
rem=n%50;
n=rem;

count=n/20;
printf("20 notes are:- %d \n ",count);
rem=n%20;
n=rem;

count=n/10;
printf("10 notes are:- %d \n",count);
rem=n%10;
n=rem;

count=n/5;
printf("5 notes are:- %d \n ",count);
rem=n%5;
n=rem;

count=n/2;
printf("2 notes are:- %d \n ",count);
rem=n%2;
n=rem;

count=n/1;
printf("1 notes are:- %d \n ",count);
rem=n%1;
n=rem;

}

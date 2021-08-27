#include<stdio.h>
#include<conio.h>
void main()
{
int n;

printf(" enter a number: \n");
scanf("%d",&n);

if(n%5==0 && n%11==0)
{
printf("number is div by 5 & 11 both: %d",n);
}
else if(n%6==0 && n%7==0)
{
printf("number is divisible by 6 & 7 both : %d",n);
}
else
printf("number is not divisible by 5&11 and 6&7");

}

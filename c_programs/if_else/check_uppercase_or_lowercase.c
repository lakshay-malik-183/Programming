#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter  a alphabet : ");
scanf("%c",&c);

if(c>=65 && c<=90)
{
printf("uppercase letter: %c",c);
}
else if(c>=97 && c<=122)
printf("lowercase letter: %c",c);

else
printf("wrong input");
}

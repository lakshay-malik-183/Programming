#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter a character: ");
scanf("%c",&c);
if(c>=65 && c<=90 || c>=97 && c<=122)
{
printf(" its a alphabet :- %c",c);
}
else
printf("not a alphabet");

}

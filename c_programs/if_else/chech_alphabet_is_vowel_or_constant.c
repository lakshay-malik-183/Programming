#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter a character: ");
scanf("%c",&c);

if(c>=65 && c<=90 || c>=97 && c<=122)
{
if(c=='a'|| c=='e'|| c=='i' || c=='o' || c=='u')
{
printf("its a vowel: %c",c);
}
else
printf("its a constant : %c",c);
}
else
printf("not a alaphabet");

}

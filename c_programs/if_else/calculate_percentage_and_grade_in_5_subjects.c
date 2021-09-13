#include<stdio.h>
#include<conio.h>

void main()
{
float s1,s2,s3,s4,s5;
float perci;

printf("enter marks of 5 subjects:- \n");
scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);

  perci=(s1+s2+s3+s4+s5)/500*100;
  printf("%f",perci);

  if(perci>=90)
  printf(" grade a");

   else if(perci>=80)
  printf(" grade b");

   else if(perci>=70)
  printf(" grade c");

   else if(perci>=60)
  printf(" grade d");

   else if(perci>=40)
  printf(" grade e");

   else if(perci<40)
  printf(" grade f");

  else
printf("wrong input");
}

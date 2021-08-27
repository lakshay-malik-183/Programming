#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter 3 numbers : \n");
scanf("%d %d %d",&a,&b,&c);

if(a>b && a>c)
{
printf("%d is greater than %d %d",a,b,c);
}
else if(b>a && b>c)
{
printf("%d is greater than %d %d",b,a,c);
}

else if(c>a && c>b)
{
printf("%d is greater than %d %d",c,a,b);
}
else if(a>=b && a>c)
{
    printf(" %d and %d is greater than %d ",a,b,c);
}
else if(b>=c && b>a)
{
    printf(" %d and %d is greater than %d ",b,c,a);
}
else
printf(" all numbers are same");
}

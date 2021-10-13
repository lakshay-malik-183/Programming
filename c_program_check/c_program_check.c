/*#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0;
    while(++i<5)

    printf("%d",i);
}
*/

/*#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0;
    while(i++<5)

    printf("%d",i);

}
*/

/*#include<stdio.h>
#include<conio.h>
void main()
{
    float x=1.1;
    while(x==1.1)

    printf("%f",x);
    x=x-0.1;

}
chapter 5

*/

/*
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10);
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int x=4,y,z;
    y=--x;
    z=x--;
    printf("%d %d %d\n",x,y,z);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
 int   x=4,y=3,z;
    z=x-- -y;
    printf("%d %d %d\n",x,y,z);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    while('a'<'b')
        printf("malayalam is palindrome\n");
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i;
    while(i=10)
    {
        printf("%d\n",i);
        i=i+1;
    }
        return 0;
}
*/

/*#include<stdio.h>
int main()
{
    float x=1.1;
    printf("%f",x);
    while(x==1.1f)
    {
        printf("%f\n",x);
        x=x-0.1;
    }
    printf("%f",x);
    return 0;
    }
*/

/*chap 8  */

/*
#include<stdio.h>
int addmult(int,int);
int main()
{
    int i=3,j=4,k,l;

    k=addmult(i,j);
    l=addmult(i,j);
    printf("%d %d\n",k,l);
    return 0;
}
int addmult(int ii,int jj)
{
    int kk,ll;
    kk=ii+jj;
    ll=ii*jj;
    return(kk,ll);
}
*/
/*#include<stdio.h>
int  main()
{
    float a=15.5;
    char ch='c';
    printit(a,ch);
    return 0;
}
printit(a,ch)
{
    printf("%f %c\n",a,ch);
}
*/
/*
#include<stdio.h>
#include<conio.h>
int func(int,float,char);

void main()
{
    int a;
    float b;
    char c;
    int x=0;
    printf("enter value of a:- ");
    scanf("%d",&a);
    fflush(stdin);
    printf("enter value of b:- ");
    scanf("%f",&b);
    fflush(stdin);
    printf("enter value of c: ");
    scanf("%c",&c);
    fflush(stdin);
 x=func(a,b,c);
 printf("%d",x);
}

int func(int x,float y,char z)
{
    if(y>2)
    {
        return x;
    }
    else
        return z;
}
*/
#include<stdio.h>
#include<conio.h>
void func(int);

void main()
{

    int a;
    printf("enter value of a: ");
    scanf("%d",&a);
    fflush(stdin);
    func(a);
}
void func(int x)
{
    if(x>10)
        {
        printf("x is greater");
        return;
        }
        printf("a is smaller");
}

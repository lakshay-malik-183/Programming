#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[3]={1,2,3};
    int *p[3];
p[0]=&arr[0];
p[1]=&arr[1];
p[2]=&arr[2];
printf("\np=%u %u %u\n\n",&arr[0],&arr[1],&arr[2]);
printf("\np=%u %u %u\n\n",*p,*(p+1),*(p+2));
printf("\np=%u %u %u\n\n",p[0],p[1],p[2]);

printf("\np=%d %d %d\n\n",*p[0],*p[1],*p[2]);

printf("\np=%d %d %d   %d  %u\n\n",**p,**(p+1),**(p+2),*p,p);
    fun(p,p);
}
void fun(int *p,int *q[])
{
    printf("%u \n %u",p,*q);
}

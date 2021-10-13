/*
#include<stdio.h>
#include<conio.h>
void display1(int);
void display2(int *);
void main()
{

    int arr[5]={10,20,30,40,50};

    for(int i=0;i<5;i++)
    {
        display1(arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        display2(&arr[i]);
    }
}
    void display1(int val)
    {
        printf("%d\n",val);
    }
    void display2(int *val)
    {
        printf("\n%d\n",*val);
    }
*/

/*#include<stdio.h>
#include<conio.h>
void main()
{
    int i=3,*x;
    float j=1.5,*y;
    char k='c',*z;

    printf("val of i=%d\n",i);
    printf("val of j=%f\n",j);
    printf("val of k=%c\n",k);

    x=&i;
    y=&j;
    z=&k;

    printf("original address in x= %u\n",x);
    printf("original address in y= %u\n",y);
    printf("original address in z= %u\n",z);

    x++;
    y++;
    z++;

    printf("new address in x= %u\n",x);
    printf("new address in y= %u\n",y);
    printf("new address in z= %u\n",z);

}
*/
/*
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=3,*x;
    float j=1.5,*y;
    char k='c',*z;

    printf("val of i=%d\n",i);
    printf("val of j=%f\n",j);
    printf("val of k=%c\n",k);

    x=&i;
    y=&j;
    z=&k;

    printf("original address in x= %u\n",x);
    printf("original address in y= %u\n",y);
    printf("original address in z= %u\n",z);

    x=x+2;
    y=y+3;
    z=z+1;

    printf("new address in x= %u\n",x);
    printf("new address in y= %u\n",y);
    printf("new address in z= %u\n",z);

    x=x-1;
    y=y-5;
    z=z-5;

     printf("new address in x= %u\n",x);
    printf("new address in y= %u\n",y);
    printf("new address in z= %u\n",z);

}
*/
/*
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=3,*p1;
    int j=30,*p2;

    p1=&i;
    p2=&j;
    printf("p1 value %u\n",p1);
    printf("p2 value %u\n",p2);
    printf("%d",p1-p2);
}
*/
/*
#include<stdio.h>
#include<conio.h>
void main()
{


    int arr[]={10,20,30,45,67,56,74};

    int i=4,*j,*k,*x,*y,*p;
    j=&i;
    j=j+9;
    k=&i;
    k=k-3;

    x=&arr[1];
    y=&arr[5];
    printf("%d\n",y-x);
    j=&arr[4];
    p=arr;
    k=(arr+4);

    if(j==k)
    {
        printf("two pointers point to same location");
    }
    else
    {
        printf("two pointers point to different locations ");
    }
}
*/

/*
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={24,34,12,44,56,17};
    int i,*j;
   // j=&arr[0];
   j=arr;

    for(i=0;i<6;i++)
    {
        printf("address = %u\n element = %u\n ",j,*j);
        j++;
    }
}
*/

#include<stdio.h>
#include<conio.h>
void display1(int*,int);
void display2(int[],int);

void main()
{
    int arr[]={24,34,12,44,56,17};
    //display1(&arr[0],6);
    display1(arr,6);
    display2(&arr[0],6);
}

void display1(int *j,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("element = %d\n",*j);
        j++;
    }
}

void display2(int j[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n%d\n",j[i]);
    }
}


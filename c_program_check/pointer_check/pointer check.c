#include<stdio.h>
#include<conio.h>
void main()
{
    //int i=3;

   // printf("addresss of i=%u\n",&i);
    //printf("value of i=%d\n",i);
    //printf("value of i=%d\n",*(&i));

 int a=1;
 int *ptr1;
 ptr1=&a;
 printf("ptr1 %u\n",ptr1);
 ptr1++;
 printf("ptr1++ %u\n",ptr1);

 double f=2;

 double *ptr4;
 ptr4=&f;
 printf("ptr4 %u\n",ptr4);

 ptr4++;
 printf("ptr4++ %u\n",ptr4);


  float b=1.1;
  float *ptr2=&b;
   printf("ptr2 %u\n",ptr2);
  ptr2++;
  printf("ptr2++ %u\n",ptr2);

  char c='a';
  char *ptr3=&c;
   printf("ptr3 %u\n",ptr3);

   ptr3++;
  printf("ptr3++ %u\n",ptr3);

}


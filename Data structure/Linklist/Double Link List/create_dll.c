#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void createDLL()
{
    int size,val,i;
    struct Node *temp=NULL;
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    if(newNode==NULL)
    {
        printf("memory Full");
        exit(1);
    }
    printf("enter size of DLL");
    scanf("%d",&size);

    printf("enter data of  first Node");
    scanf("%d",&val);

    newNode->data=val;
    newNode->prev=NULL;
    newNode->next=NULL;
    head=newNode;
    temp=newNode;

    for(i=2;i<=size;i++)
    {
        newNode=(struct Node *)malloc(sizeof(struct Node));

        if(newNode==NULL)
        {
            printf("memory FULL");
            break;
        }
        printf("enter data of node");
        scanf("%d",&val);
        newNode->data=val;
        newNode->next=NULL;
        newNode->prev=NULL;
        temp->next=newNode;
        newNode->prev=temp;
        temp=newNode;
    }
}

void traverseDLL()
{
    struct Node *temp=NULL;

 if(head==NULL)
 {
     printf("empty linklist");
     exit(1);
 }
else
     {
         while(temp!=NULL)
         {
             printf("%d",temp->data);
         }
     }
}

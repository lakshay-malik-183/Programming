#include<stdio.h>
#include<conio.h>
 struct Node
 {
     int data;
     struct Node *next;
 };
 struct Node *head=NULL;
   struct Node * createList();
 void traverseList();

void display(struct Node *);
struct Node *rearrangeList();
void swapNodes(int,int);
void triplet(struct Node *,struct Node *,struct Node *,int);
 void main()
 {
     int ch;
     char c;
do{

     printf("\n1.create\n2.traverse\n3.search element\n4.delete from beginning\n5.delete at end\n6.count no. of nodes\n7.delete all nodes\n");
      printf("8.delete at position\n9.delete at middle\n10. insert at end\n11.insert at middle\n12.middle node\n13. insert at beginning\n");
     printf("14. nth node find\n15. insert At Position\n16. rearrange link list\n17. triplet\n18. last occurence\n19. remove duplicates\n");
      printf("20. segeregate even odd\n21. intersection 2 nodes\n22. nth node from end\n23. swap nodes");
      printf("\n enter choice:\n");
     scanf("%d",&ch);

     printf("\n \n");
    int value,n,key;
    struct Node *h1=NULL;
    struct Node *h2=NULL;
    struct Node *h3=NULL;
     switch(ch)
     {
         case 1:
                head = createList();
                printf("created\n");
                break;

         case 2: traverseList();
                    break;
         case 3: searchElement();
                     break;

          case 4: delete_From_Beginning();
          break;

          case 5: delete_at_end();
          break;

          case 6: countNodes();
          break;

          case 7: deleteAllNodes();
          break;

          case 8: deleteAtPosition();
          break;

          case 9: deleteMiddle();
          break;

          case 10: insertAtEnd();
          break;

          case 11: insertAtMiddle();
          break;

          case 12: middleNode();
          break;

          case 13:

              printf("enter value");
              scanf("%d",&value);
               insertAtBeginning(value);
          break;
          case 14: findNthNode();
          break;

          case 15: insertAtPosition();
          break;

          case 16: h1=rearrangeList();
            display(h1);
          break;

          case 17:

               h1=createList();
               h2=createList();
               h3=createList();
               display(h1);
               display(h2);
               display(h3);

              printf("enter number");
              scanf("%d",&n);
              triplet(h1,h2,h3,n);
                    break;

         case 18: printf("enter key");
                  scanf("%d",&key);
                   lastOccurence(key);
                   break;

        case 19:  removeDuplicates();
                    break;

         case 20:  Segeregate();
                   break;

         case 21: Intersection();
                   break;

          case 22:  printf("enter n");
                    scanf("%d",&n);
                    nthFromEnd(n);
                    break;

           case 23: swapNodes(20,40);
                     break;

         default: printf("you entered wrong choice\n");
     }
     fflush(stdin);
     printf("\nenter again or not y or n\n-");
     scanf("%c",&c);
    }while(c=='y' || c=='Y');

 }
   struct Node* createList()
   {
        struct Node *head=NULL;
        struct Node *temp=NULL;
        struct Node *newNode=NULL;
        int n,i,val;

         head=(struct Node *)malloc(sizeof(struct Node));
         if(head==NULL)
         {
             printf("memory full,can not allocate ");
         }
         else
         {
             printf("enter size of linklist:- ");
             scanf("%d",&n);

             printf("enter data of first node:- ");
             scanf("%d",&val);

             head->data=val;
             head->next=NULL;
             temp=head;

             for(i=2;i<=n;i++)
             {
                 newNode=(struct Node *)malloc(sizeof(struct Node));

                 if(newNode==NULL)
                 {
                     printf("memory full,can not allocate ");
                 }
                 else
                 {
                     printf("enter data for node: ");
                     scanf("%d",&val);

                     newNode->data=val;
                     newNode->next=NULL;
                     temp->next=newNode;
                     temp=newNode;
                 }

             }
            // return head;

         }
  return head;
   }


   void display(struct Node *h1)
   {
        struct Node *temp=NULL;

    if(h1==NULL)
    {
        printf("empty link list");
    }
    else
    {
        temp=h1;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
   }


   void traverseList()
   {
        struct Node *temp=NULL;

    if(head==NULL)
    {
        printf("empty link list");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
   }


void searchElement()
{
    struct Node *temp=NULL;

    if(head==NULL)
    {
        printf("empty linklist");
    }
    else
    {
        int search,flag=0;

        printf("enter element you want to search");
        scanf("%d",&search);

        temp=head;
        while(temp!=NULL)
        {
         if(temp->data==search)
         {
             flag=1;
             break;
         }
        else
         {
             temp=temp->next;
         }
        }
        if(flag==1)
        {
            printf("element found %d",search);
        }
        else
        {
            printf("element not found");
        }
    }
}

void delete_From_Beginning()
{
    struct Node *temp=NULL;
    if(head==NULL)
    {
        printf("empty linklist");
    }
    else
    {
        temp=head;
        head=head->next;

        printf("data deleted %d ",temp->data);
        free(temp);
    }
}


void delete_at_end()
{
    struct Node *temp=NULL;
    struct Node *prev=NULL;

    if(head==NULL)
    {
        printf("empty linklist");
    }
    else
    {
        temp=head;
        prev=NULL;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }

        free(temp);
        if(prev==NULL)
        {
            printf("all node deleted");
            head=NULL;
        }
        else
        {

        prev->next=NULL;

        }

    }
}


int countNodes()
{
    int count=0;
    struct Node *temp=NULL;
    if(head==NULL)
    {
        printf("empty link list");
        printf("count=0");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        printf("total no. of nodes are: %d",count);
    }
    return count;
}


 void deleteAllNodes()
 {
     struct Node *temp=NULL;

     if(head==NULL)
     {
         printf("empty linklist");
     }
     else
     {

         while(head!=NULL)
         {
             temp=head;
             head=head->next;
             free(temp);
         }
     }

 }


void deleteAtPosition()
{
    struct Node *tenp=NULL;
    struct Node*prev=NULL;
    struct Node *temp=NULL;


    if(head==NULL)
    {
        printf("empty linklist");
    }
    else
    {
        int i=1,p;
        printf("enter position you want to delete");
        scanf("%d",&p);

        int count=countNodes();
        if(p>=count)
        {
            printf("\nposition must be less than count,enter right position");
        }


        else if(p<0)
        {
            printf("user entered negative no. ie wrong");
        }

        else if(p==0)
        {   temp=head;
            head=head->next;
            free(temp);
        }
        else
        {
            struct Node *temp=NULL;
            temp=head;
            prev=NULL;
            for(i=0;i<p;i++)
            {
                prev=temp;
                temp=temp->next;
            }
            if(prev==NULL)
            {
                head=head->next;
                free(temp);
            }
            else
            {

            prev->next=temp->next;
            free(temp);
            }
        }

    }
}



void deleteMiddle()
{
    struct Node *temp=NULL;
    struct Node *next=NULL;
    struct Node *prev=NULL;
    if(head==NULL)
    {
        printf("empty linklist");
    }
    else if(head->next==NULL)
    {
        free(head);
        head=NULL;

    }
    else if(head->next->next==NULL)
    {
        temp=head->next;
        free(temp);
        head->next=NULL;

    }
    else
    {
        int i=0;
        struct Node*prev=NULL;
        temp=head;
        prev=NULL;
        int count=countNodes();
        count=(count%2==0)?(count/2):((count+1)/2);

        for(i=0;i<(count-1);i++)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        free(temp);
    }
}


void insertAtEnd()
{
    int val;
    struct Node *newNode=NULL;
    newNode=(struct Node *)malloc(sizeof(struct Node));

    if(newNode==NULL)
    {
        printf("memory full");
    }
    else
    {
        printf("enter data for node: ");
        scanf("%d",&val);

        newNode->data=val;
        newNode->next=NULL;

        if(head==NULL)
        {
            head=newNode;
        }
        else
        {
            struct Node *temp=NULL;
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
}



void insertAtMiddle()
{
    struct Node *newNode=NULL;

    newNode=(struct Node *)malloc(sizeof(struct Node));
    if(newNode==NULL)
    {
        printf("memory full");
    }
    else
    {
        int val;
        printf("enter data for Node");
        scanf("%d",&val);

        newNode->data=val;
        newNode->next=NULL;

        if(head==NULL)
        {
            head=newNode;
        }
        else
        {
            int i=0;
            struct Node *temp=NULL;
            struct Node *prev=NULL;
            temp=head;
            prev=NULL;
            int count=countNodes();
            count=(count%2==0)?(count/2):((count+1)/2);
            prev=NULL;

            for(i=0;i<count;i++)
            {
                prev=temp;
                temp=temp->next;
            }
            prev->next=newNode;
            newNode->next=temp;
        }
    }
}


void middleNode()
{
    struct Node *temp=NULL;

    if(head==NULL)
    {
        printf("empty linklist");
    }
    else if(head->next==NULL)
    {
        printf("one node %d",head->data);
    }
    else
    {
        temp=head;
        int i=0;
        int count=countNodes();
         if(count%2==0)
        {
            for(i=0;i<count/2;i++)
            {
                temp=temp->next;
            }
            printf("middle node %d",temp->data);

        }
        else
        {
            for(i=0;i<count/2;i++)
            {
                temp=temp->next;
            }
            printf("middle node %d",temp->data);

        }
    }
}

void insertAtBeginning(int val)
{
    struct Node *newNode=NULL;
        newNode=(struct Node *)malloc(sizeof(struct Node));

    if(newNode==NULL)
    {
        printf("memory full,cant allocate");
    }
    else
    {
        newNode->data=val;
        newNode->next=head;
        head=newNode;
    }
}

//wrong loop

void findNthNode()
{
 int count=countNodes();
    if(head==NULL)
    {
        printf("empty linklst");
    }

    else
    {
        int index,i=0;
        struct Node *temp=NULL;
        printf("enter  index no.");
        scanf("%d",&index);

        if(index>=count || index<0)
        {
            printf("wrong input");
        }
        else
       {
            temp=head;
            if(index==0)
            {
                printf("%d",temp->data);
            }
            else
            {
                    for(i=0;i<index-1;i++)
                    {
                        temp=temp->next;
                    }
                    printf(" %d",temp->data);
                }
            }
        }
    }




void insertAtPosition()
{
    struct Node *newNode=NULL;
    struct Node *temp=NULL;
    struct Node*prev=NULL;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    if(newNode==NULL)
    {
        printf("memory full");
    }
    else
    {
        int val,p,i=0;
        printf("enter data for node");
        scanf("%d",&val);

        newNode->data=val;
        newNode->next=NULL;

     printf("enter position where you want to insert node ");
        scanf("%d",&p);
        if(head==NULL)
        {
            head=newNode;
        }
        else
        {

        temp=head;
        prev=NULL;
        int count=countNodes();

        if(p>count)
        {
            printf("C");
        }
        else
        {
            for(i=0;i<p;i++)
            {
                prev=temp;
                temp=temp->next;
            }
            prev->next=newNode;
            newNode->next=temp;

        }
        }
    }
}

struct Node* rearrangeList()
{

struct Node *min=NULL;
struct Node *temp=NULL;
struct Node *temp1=NULL;
struct Node *head1=NULL;
struct Node *last=NULL;
struct Node *newNode=NULL;
struct Node *prev=NULL;

temp=head;
min=head;
prev=NULL;

while(temp->next!=NULL && temp!=last)
{
    newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=temp->data;
    newNode->next=NULL;
    temp=temp->next;
    min=temp;
    if(head1==NULL)
    {
        head1=newNode;
        temp1=head1;
    }
    else
    {
        temp1->next=newNode;
        temp1=newNode;
    }
    while(min!=last && min->next!=last)
       {
           prev=min;
           min=min->next;
       }
       last=min;
       min=temp;
       newNode=(struct Node *)malloc(sizeof(struct Node));
       newNode->data=last->data;
       newNode->next=NULL;
       temp1->next=newNode;
       temp1=newNode;

}
return head1;

}

void triplet(struct Node *head1,struct Node *head2,struct Node *head3,int n)
{
    struct Node *temp1=NULL;
    struct Node *temp2=NULL;
    struct Node*temp3=NULL;
     temp1=head1;
     temp2=head2;
     temp3=head3;
    int flag=0;

    while(temp1!=NULL)
    {
        if(flag==1)
            break;

        while(temp2!=NULL)
        {
            if(flag==1)
            break;

            while(temp3!=NULL)
            {
                if(temp1->data+temp2->data+temp3->data==n)
                {
                 flag
                 =1;
                 printf("%d %d %d",temp1->data,temp2->data,temp3->data);
                 break;
                }
                else
                 temp3=temp3->next;
            }

            temp3=head3;
            temp2=temp2->next;
        }
        temp3=head3;
        temp2=head2;
        temp1=temp1->next;

    }
            if(flag==0)
                printf("\nnot found");
           else
                printf("\nfound");
}

void lastOccurence(int key)
{
    int flag=0;
    struct Node *temp=NULL;
    struct Node *prev=NULL;
    struct Node *store=NULL;
    struct Node *old=NULL;
    struct Node *new1=NULL;
    temp=head;
    prev=NULL;
    while(temp!=NULL)
    {

            if(temp->data==key)
            {
                if(head->next==NULL)
                {
                    free(head);
                    printf("key deleted");
                    flag=1;
                    head=NULL;

                    break;
                }
                else
                {
                    store=temp;
                    new1=temp->next;
                    old=prev;
                    prev=temp;
                    temp=temp->next;
                    flag=1;
                }
            }
            else
            {
                prev=temp;
                temp=temp->next;
            }
    }//end while
    if(flag==0)
        printf("key not found");
    else
    {
        if(head==NULL)
         {
           printf("\n list is empty now");
         }
        else
         {
           if(store==head)
              {
                head=head->next;
                free(store);
              }
          else
              {
                printf("free store");
                free(store);
                old->next=new1;
             }
         }
    }

}

void removeDuplicates()
{
    struct Node *temp=NULL;
    struct Node *prev=NULL;
    struct Node *store=NULL;
    struct Node *del=NULL;

    temp=head;
    prev=NULL;

    while(temp!=NULL && temp->next!=NULL)
    {
        if(temp->data==temp->next->data)
        {
            prev=temp;
            store=temp->next->next;
            del=temp->next;
            free(del);

            prev->next=store;
        }
        else
        {
            temp=temp->next;
        }
    }
}

void Segeregate()
{
    struct Node *prev=NULL;
    struct Node *temp=NULL;
    struct Node *even=NULL;
    struct Node *odd=NULL;
    struct Node *temp1=NULL;
    struct Node *temp2=NULL;

    temp=head;
    prev=NULL;

    while(temp!=NULL)
    {
        if(temp->data%2!=0)
        {
            if(odd==NULL)
            {
                odd=temp;
                temp1=temp;
                temp=temp->next;
                odd->next=NULL;
            }
            else
            {
                temp1->next=temp;
                temp1=temp;
                temp=temp->next;
                temp1->next=NULL;
            }
        }
        else
        {
            if(even==NULL)
            {
                even=temp;
                temp2=temp;
                temp=temp->next;
                even->next=NULL;
            }
            else
            {
                temp2->next=temp;
                temp2=temp;
                temp=temp->next;
                temp2->next=NULL;

            }
        }
    }
    if(temp2==NULL)
    {
        head=odd;
    }
    else
    {
    temp2->next=odd;
    head=even;
    }
}

void Intersection()
{
    struct Node *temp1=NULL;
    struct Node *temp2=NULL;
    struct Node *temp3=NULL;
    struct Node *newNode=NULL;
    struct Node *head1=NULL;
    struct Node *head2=NULL;
    struct Node *temp=NULL;
    struct Node *head3=NULL;

    temp1=head1;
    temp2=head2;

    while(temp!=NULL && temp2!=NULL)
    {
        if(temp1->data<temp2->data)
        {
            temp1=temp1->next;
        }
        else if(temp2->data<temp1->data)
        {
            temp2=temp2->next;
        }
        else
        {
            newNode=(struct Node *)malloc(sizeof(struct Node));
            if(newNode==NULL)
            {
                printf("memory full");
            }
            else
            {
                newNode->data=temp1->data;
                newNode->next=NULL;
            }
            if(head3==NULL)
            {
                head3=newNode;
                temp3=head3;
            }
            else
            {
                temp3->next=newNode;
                temp3=newNode;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
}

void nthFromEnd(int n)
{
    struct Node *temp=NULL;

    if(head==NULL)
    {
        printf("empty list");
    }
    else
    { int max;
        int i=0;

        temp=head;
          int count=countNodes();
          max=count;
          max=max-n;


        while(temp!=NULL && i<max)
        {
            temp=temp->next;
            i++;
        }
    }
    printf("\n %d\n ",temp->data);
}

void swapNodes(int X,int y)
{
    struct Node *temp=NULL;
    struct Node *prev=NULL;
    struct Node *first=NULL;
    struct Node *second=NULL;
    struct Node *prev1=NULL;
    struct Node *prev2=NULL;
    struct Node *next1=NULL;
    struct Node *next2=NULL;
    struct Node *next=NULL;
    temp=head;

     while(temp!=NULL)
     {
         if(temp->data==X)
            {
              first=temp;
              prev1=prev;
             next1=first->next;
            }

            else if(temp->data==y)
            {
                second=temp;
                prev2=prev1;
                next2=second->next;
            }
            prev=temp;
            temp=temp->next;
     }
     if(prev1==NULL)
     {
         second=head;
     }
     else
     {
         prev1->next=second;
     }
     if(prev2!=first)
     {
         second->next=next1;
         prev2->next=first;
     }
     else
     {
         second->next=first;
     }
     first->next=next2;
}

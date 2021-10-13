#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
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
struct Node *intersection(struct Node *,struct Node *);
struct Node * alternateMinumumMaximum();
struct Node * alternatingSplit();
struct Node* greaterRight(struct Node*);
struct Node* deleteNAfterM(struct Node*,int,int);
struct Node *alternateSplit(struct Node *);
struct Node * reverse(struct Node *);
bool palindrome(struct Node *head);
bool identicalList(struct Node*,struct Node *);
struct Node *add1(struct Node *);
struct Node *alternateAscendingDescending(struct Node *);
struct Node *positionedEvenOdd(struct Node *);
void Triplet(int,struct Node *,struct Node *,struct Node*);
 void main()
 {
     int ch;
     char c;

do{

     printf("\n1.create\n2.traverse\n3.search element\n4.delete from beginning\n5.delete at end\n6.count no. of nodes\n7.delete all nodes\n");
      printf("8.delete at position\n9.delete at middle\n10. insert at end\n11.insert at middle\n12.middle node\n13. insert at beginning\n");
     printf("14. nth node find\n15. insert At Position\n16. triplet\n17. delete last occurence\n18. remove duplicates\n");
      printf("19. segeregate even odd\n20. intersection 2 nodes\n21. nth node from end\n22. swap nodes\n");
      printf("23. sort a list of 0s,1s,2s\n24. alternate minimum maximum \n25.alternate even\n26. reverse list\n27. rotate list\n");
      printf("28. move last element in front\n29. alternating split of list\n30. loop detect\n31. length of loop\n32.alternate ascending to descending\n");
      printf("35. greater right side\n36.delete n after m\n37 add 1\n38. decimal equivalnet\n39.alternate split\n ");
      printf("40 identical\n41. alternate ascending descending\n42. positioned even odd\n43. triplet\n");
      printf("\n enter choice:\n");
     scanf("%d",&ch);

     printf("\n \n");
    int value,n,n2,key,val;
    bool ans;
    struct Node *h1=NULL;
    struct Node *h2=NULL;
    struct Node *h3=NULL;
    struct Node *head2=NULL;
    struct Node *head3=NULL;
    struct Node *head1=NULL;
    struct Node *temp=NULL;
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

          case 16:

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

         case 17: printf("enter key");
                  scanf("%d",&key);
                   lastOccurence(key);
                   break;

        case 18:  removeDuplicates();
                    break;

         case 19:  Segeregate();
                   break;

         case 20:  h1=createList();
                  h2=createList();
                 Intersection(h1,h2);
                   break;

          case 21:  printf("enter n");
                    scanf("%d",&n);
                    nthFromEnd(n);
                    break;

           case 22: swapNodes(20,40);
                     break;

           case 23: sortLiistOf012();
                     break;

         case 24: head2=alternateMinumumMaximum();


         while(head2!=NULL)
         {
             printf("\n%d\n",head2->data);
             head2=head2->next;
         }
                     break;

            case 25: head3=alternateEvenOdd();
                      break;

           case 26: head=reverse(head);
                      break;

            case 27: rotateList();
                     break;

          case 28: moveLastElementToFirst();
                     break;

          case 29: alternatingSplit();
                    break;
          case 30: detectLoop();
                   break;

          case 31: lengthLoop();
                    break;

           case 32: alternateAscendingToDescending();
                    break;


          case 35: head=greaterRight(head);
                break;

          case 36: head=deleteNAfterM(head,4,2);
                    break;

         case 37: add1(head);
                  break;

        case 38: decimalEquivalent(head);
                    break;

       case 39: alternateSplit(head);
                       break;

        case 40:  printf("enter value of n first Node:\n");
                        scanf("%d",&n);
                        head1=createList(n);
                        printf("enter value of n second  Node:\n");
                        scanf("%d",&n2);
                        head2=createList(n2);
                        ans=identicalList(head1,head2);
                        if(ans==true)
                        printf("true\n");
                        else
                        printf("false\n");
                            break;

             case 41: head=alternateAscendingDescending(head);
                         break;

            case 42:  head=positionedEvenOdd(head);
                        break;

            case 43: head1=createList();
                     head2= createList();
                     head3=createList();

                 printf("enter value");
                    scanf ("%d",&val);

                Triplet(val,head1,head2,head3);
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
        int count=countNodes();
        if(head==NULL && p==1)
        {
            head=newNode;
        }
         else if (head==NULL && (p>1 || p==0))
         {
             printf("not possible");
         }
        else
        {

        temp=head;
        prev=NULL;
         if(p==1)
        {
            newNode->next=head;
            head=newNode;
        }
        else if(p<=count)
        {
            temp=head;
            for(i=1;i<p;i++)
            {
              prev=temp;
              temp=temp->next;
            }
            prev->next=newNode;
            newNode->next=temp;
        }
        else if(p==count+1)
        { temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newNode;
            temp=newNode;

        }


        }
    }
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
                 flag=1;
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

void Intersection(struct Node *head1,struct Node *head2)
{
    struct Node *temp1=NULL;
    struct Node *temp2=NULL;
    struct Node *temp3=NULL;
    struct Node *newNode=NULL;
    struct Node *temp=NULL;
    struct Node *head3=NULL;

    temp1=head1;
    temp2=head2;

    while(temp1!=NULL && temp2!=NULL)
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
     printf("%d",head);
}

void sortLiistOf012()
{
    struct Node *temp=NULL;
    struct Node *temp1=NULL;
    struct Node *temp2=NULL;
    struct Node *temp3=NULL;
    struct Node *one=NULL;
    struct Node *zero=NULL;
    struct Node *two=NULL;

        temp=head;

        while(temp!=NULL)
        {
            if(temp->data==1)
            {
                if(one==NULL)
                {
                    one=temp;
                    temp=temp->next;
                    one->next=NULL;
                    temp1=one;
                }
                else
                {
                    temp1->next=temp;
                    temp1=temp1->next;
                    temp=temp->next;
                    temp1->next=NULL;
                }
            }
        else if(temp->data==2)
            {
                if(two==NULL)
                {
                    two=temp;
                    temp=temp->next;
                    two->next=NULL;
                    temp2=two;
                }
                else
                {
                    temp2->next=temp;
                    temp2=temp2->next;
                    temp=temp->next;
                    temp2->next=NULL;
                }
            }
            if(temp->data==0)
            {
                if(zero==NULL)
                {
                    zero=temp;
                    temp=temp->next;
                    zero->next=NULL;
                    temp3=zero;
                }
                else
                {
                    temp3->next=temp;
                    temp3=temp3->next;
                    temp=temp->next;
                    temp3->next=NULL;
                }
            }
        }
        head=zero;
        temp3->next=one;
        temp1->next=two;
        printf("head= %d",head);
}

struct Node * alternateMinumumMaximum()
 {
     struct Node *temp=NULL;
     struct Node *temp1=NULL;
     struct Node *newNode=NULL;
     struct Node *min=NULL;
     struct Node *head1=NULL;
     struct Node *last=NULL;
     temp=head;
     min=head;

     if(head==NULL)
     {
         printf("empty list");
     }
     else if(head->next==NULL)
     {
         printf("one node only");
     }
     else
     {
         while(temp->next!=NULL )
         {
             if(min==temp && min!=head)
             {
                 break;
             }
             newNode=(struct Node *)malloc(sizeof(struct Node));
              newNode->data=temp->data;
              newNode->next=NULL;
              temp=temp->next;
              min=temp;

              if(head1==NULL)
              {
                  head1=newNode;
                  temp1=head1;
                  printf("\nhead 1 data : %d\n\n",head1->data);
              }
              else
              {
                  temp1->next=newNode;
                  temp1=newNode;
              }
         while(min->next!=last)
         {
             min=min->next;
         }
         last=min;

         newNode=(struct Node *)malloc(sizeof(struct Node));

         newNode->data=last->data;
         newNode->next=NULL;
         temp1->next=newNode;
         temp1=newNode;
         }
       //  printf("exiting loop");
     }
  //   printf("out of else statement");
         return head1;

 }

void alternateEvenOdd()
{
    struct Node *temp1=NULL;
    struct Node *temp2=NULL;
    struct Node *even=NULL;
    struct Node *odd=NULL;
    struct Node *temp=NULL;

    temp=head;

    while(temp!=NULL)
    {
        if(temp->data%2!=0)
        {
            if(odd==NULL)
            {
                odd=temp;
                temp1=temp;
                temp=temp->next;
                temp1->next=NULL;
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
            if(temp->data%2==0)
            {
                if(even==NULL)
                {
                    even=temp;
                    temp2=temp;
                    temp=temp->next;
                    temp2->next=NULL;
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
    }
    if(head->data%2!=0)
    {
        head=odd;
        temp1->next=even;
    }
    else
    {
    head=even;
    temp2->next=odd;
    }
    temp1=odd;
    temp2=even;

     if(odd==NULL && even!=NULL)
     {
         head=temp2;
     }
else
{
     while(temp1!=NULL && temp2!=NULL)
     {
         odd=temp1->next;
         even=temp2->next;
         temp1->next=temp2;
         temp1=odd;
         temp2->next=temp1;
         temp2=even;
     }
}
     if(temp1==NULL && temp2!=NULL)
     {
         odd->next=temp2;
     }
}

struct Node * reverse(struct Node * head)
{
    struct Node *prev=NULL;
    struct Node *temp=NULL;

    if(head==NULL)
        printf("empty list");
    else
    {
        prev=head;
        temp=head->next;
        head=head->next;

        prev->next=NULL;

        while(head!=NULL)
        {
            head=head->next;
            temp->next=prev;
            prev=temp;
            temp=head;
        }
        head=prev;
    }
}

void rotateList()
{
    struct Node *temp=NULL;
    struct Node *old=NULL;
    struct Node *k=NULL;

    temp=head;
    old=head;

    int count=1;
    int key;
    printf("enter key");
    scanf("%d",&key);

    int total=countNodes();

    if(key>total)
    {
        printf("\n entered key is greater than total no. of nodes");
    }
    else if(key==total)
        printf("\n no change in list");


    else
    {
     while(count<key && temp!=NULL)
     {
    temp=temp->next;
    count++;
     }
    k=temp;
   temp=temp->next;
    head=temp;
    k->next=NULL;

     while(temp->next!=NULL)
     {
    temp=temp->next;
      }
    temp->next=old;
   }
 }

 void moveLastElementToFirst()
 {
     struct Node *temp=NULL;
     struct Node *prev=NULL;

     temp=head;
     prev=NULL;

     if(head==NULL)
     {
         printf("empty list");
     }
     else if(temp->next==NULL)
     {
         printf("one node only");
         printf("%d",temp->data);
     }

     else

     {
         while(temp->next!=NULL)
         {
             prev=temp;
             temp=temp->next;
         }
         prev->next=NULL;
         temp->next=head;
         head=temp;
     }
 }

 struct Node * alternatingSplit()
 {
     struct Node *temp=NULL;
     struct Node *head1=NULL;
     struct Node *head2=NULL;
     struct Node *temp1=NULL;
     struct Node *temp2=NULL;
     struct Node *newNode1=NULL;
     struct Node *newNode2=NULL;

     temp=head;

     while(temp!=NULL)
     {
         newNode1=(struct Node *)malloc(sizeof(struct Node));

         newNode1->data=temp->data;
         newNode1->next=NULL;

         if(head1==NULL)
         {
             head1=newNode1;
             temp1=newNode1;
         }
         else
         {
             temp1->next=newNode1;
             temp1=newNode1;
         }
         temp=temp->next;
         if(temp==NULL)
         {
             break;
         }
         else
         {
             newNode2=(struct Node *)malloc(sizeof(struct Node));

             newNode2->data=temp->data;
             newNode2->next=NULL;

                 if(head2==NULL)
                 {
                     head2=newNode2;
                     temp2=newNode2;
                 }
                 else
                 {
                     temp2->next=newNode2;
                     temp2=newNode2;
                 }
                 temp=temp->next;
         }
     }
     printf("exit else");
     temp1->next=head2;

     return head1;
 }

 void detectLoop()
 {

     if(head==NULL)
     {
         printf("empty list");
     }
     else if(head->next==NULL)
     {
         printf("one node only");
     }
     else
     {
         struct Node *slow=NULL;
         struct Node *fast=NULL;


         slow=head;
         fast=head;

         int flag=0;

         while(slow!=NULL && fast!=NULL && fast->next!=NULL)
         {
             if(slow!=head && fast!=head && slow==fast)
             {
                 flag=1;
                 break;
             }
             else
             {
                 slow=slow->next;
                 fast=fast->next->next;
             }
         }
         if(flag==1)
        printf("loop detected");

     else
        printf("no loop detected");
     }

 }

  void lengthLoop()
 {

     if(head==NULL)
     {
         printf("empty list");
     }

     else if(head->next==NULL)
     {
         printf("one node only");
     }
     else
     {
         struct Node *slow=NULL;
         struct Node *fast=NULL;


         slow=head;
         fast=head;

         int flag=0;

         while(slow!=NULL && fast!=NULL && fast->next!=NULL)
         {
             if(slow!=head && fast!=head && slow==fast)
             {
                 flag=1;
                 break;
             }
             else
             {
                 slow=slow->next;
                 fast=fast->next->next;
             }
         }
         if(flag==0)
        printf("no loop detected");

     else
        {
            struct Node *temp=NULL;

            int count=1;
            temp=slow;

            while(temp->next!=slow)
            {
                count++;
                temp=temp->next;
            }
            printf("length of loop=%d",count);
        }

     }

 }

 void alternateAscendingToDescending()
 {
     struct Node *temp1=NULL;
     struct Node *temp2=NULL;

     int val;

     temp1=head;
     temp2=head->next;

     if(head==NULL)
        printf("empty list");

     else if(head->next==NULL)
        printf("one node only");

     else
     {
         while(temp1!=NULL && temp1->next!=NULL)
         {
             while(temp2!=NULL)
             {
                 if(temp1->data>temp2->data)
                 {
                     val=temp1->data;
                     temp1->data=temp2->data;
                     temp2->data=val;
                 }
                 else
                    temp2=temp2->next;
             }
             temp1=temp1->next;
             temp2=temp2->next;
         }
     }
 }

struct Node* greaterRight(struct Node* head)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node *temp=head,*prev=head;
        struct Node *check=NULL,*neww=NULL;
        int flag=0;
        while(temp!=NULL)
        {
            flag=0;
            check=temp;
            neww=check->next;

            while(neww!=NULL)
            {
                if(check->data<neww->data)
                {
                    flag=1;
                    break;
                }
                else
                {
                    flag=0;
                    neww=neww->next;
                }
            }

            if(flag==1)
            {
                if(temp==head)
                {
                    head=head->next;
                    temp=head;
                    prev=head;
                    free(check);
                }
                else
                {
                    prev->next=temp->next;
                    temp=temp->next;
                    free(check);
                }
            }
            else
            {
                //prev->next=temp->next;
                prev=temp;
                temp=temp->next;

            }
        }
        return head;
    }
}

struct Node* deleteNAfterM(struct Node* head,int m,int n)
{
    if(head==NULL)
        return NULL;

    else
    {
        struct Node *temp=head,*prev=head;
        int i=1;
        while(i<=m)
        {
            prev=temp;
            temp=temp->next;
            i++;
        }
        i=1;
        while(i<=n)
        {
            if(head==temp)
            {
                head=head->next;
                prev=head;
                free(temp);
                temp=head;
                i++;
            }
           else
           {
                prev->next=temp->next;
                free(temp);
                temp=prev->next;
                i++;
           }
        }
        printf("exit");
        return head;
    }
}

struct Node *add1(struct Node *head)
{
    if(head==NULL)
        return NULL;
    else
    {
        //printf("hy");
        head=reverse(head);
       // traverseList(head);
        struct Node *temp=head;

        int sum=0,rem=0,carry=0;
        struct Node *head2=NULL,*temp2=NULL;
        head2=(struct Node *)malloc(sizeof(struct Node));

        if(head2==NULL)
            return NULL;
        else
        {

            sum=temp->data+1;
            if(sum>=10)
            {
                rem=sum%10;
                carry=sum/10;
                head2->data=rem;
                head2->next=NULL;
                temp2=head2;
                temp=temp->next;
            }
            else
            {
                head2->data=sum;
                head2->next=NULL;
                temp2=head2;
                temp=temp->next;
            }
        }

        while(temp!=NULL)
        {
            struct Node*newNode=NULL;
            newNode=(struct Node*)malloc(sizeof(struct Node));
            if(newNode==NULL)
                return NULL;
            else
            {
                sum=temp->data+carry;
                if(sum >=10)
                {
                    rem=sum%10;
                    carry=sum/10;
                    newNode->data=rem;
                    newNode->next=NULL;
                    temp2->next=newNode;
                    temp2=newNode;
                    temp=temp->next;
                }
                else
                {
                    newNode->data=sum;
                    newNode->next=NULL;
                    temp2->next=newNode;
                    temp2=newNode;
                    temp=temp->next;
                    carry=0;

                }
            }
        }
        if(carry>0)
        {
            struct Node*newNode=NULL;
            newNode=(struct Node*)malloc(sizeof(struct Node));
            if(newNode==NULL)
                return NULL;
            else
            {
                newNode->data=carry;
                newNode->next=NULL;
                temp2->next=newNode;
                temp2=newNode;
                carry=0;
          //  traverseList(head2);
          //  head2=reverse(head2);
           //traverseList(head2);
            }
        }

            traverseList(head2);
            head2=reverse(head2);
            traverseList(head2);
            return head;

    }

}
void decimalEquivalent(struct Node *head)
{
    if(head==NULL)
        printf("empty list");
    else

    {
        int count=1,i=1,pow=1,sum=0;
   head=reverse(head);
        struct Node *temp=head;
        while(temp!=NULL)
        {
            if(temp->data==0)
            {
                temp=temp->next;
                count++;
            }
            else
            {
                while(i<count)
                {
                    pow=pow*2;
                    i++;
                }
                sum=sum+pow;
                pow=1;
                i=1;
                count++;
                temp=temp->next;
            }
        }
        printf("%d",sum);
    }
}

struct Node *alternateSplit(struct Node *head)
{
    if(head==NULL)
        return NULL;
    else
    {
        struct Node *temp=head,*temp2=head->next,*head2=head->next;

            while(temp->next!=NULL && temp2->next!=NULL)
            {
                temp->next=temp2->next;
                temp=temp2->next;
                temp2->next=temp->next;
                temp2=temp->next;
            }
            temp->next=head2;
            traverseList(head);
            //traverseList(head2);
            return head;

    }
}

bool identicalList(struct Node* head1,struct Node *head2)
{
    //traverseList(head1);
   // traverseList(head2);
    if(head1==NULL && head2==NULL)
        return true;

    else if(head1==NULL && head2!=NULL)
        return false;

    else if(head1!=NULL && head2==NULL)
        return false;

    else if(head1->data==head2->data)
    {
        head1=head1->next;
        head2=head2->next;
        bool ans=identicalList(head1,head2);
        return ans;
    }

    else
        return false;

}

struct Node*addition(struct Node*headone,struct Node*headtwo)
 {
     if(headone==NULL && headtwo==NULL)
     {
         return NULL;
     }
     else if(headone!=NULL && headtwo==NULL)
        return headone;
     else if(headone==NULL && headtwo!=NULL)
        return headtwo;
     else
     {
         traverseList(headone);
         traverseList(headtwo);
         struct Node*head1=reverse(headone);
          struct Node*head2=reverse(headtwo);
          traverseList(head1);
         traverseList(head2);
         struct Node*head3=NULL,*temp3=NULL;
         struct Node*temp1=head1;
         struct Node*temp2=head2;
         struct Node*newNode=NULL;
         int prev=0,rem=0,sum=0;
         while(temp1!=NULL && temp2!=NULL)
         {
             newNode=(struct Node*)malloc(sizeof(struct Node));
              sum=temp1->data+temp2->data+prev;
             if(sum>=10)
             {
                 rem=sum%10;
                 prev=sum/10;
                 newNode->data=rem;
                 newNode->next=NULL;
             }
             else
             {
                 prev=0;
                 newNode->data=sum;
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
         if(temp1==NULL)
         {
             while(temp2!=NULL)
             {
                 newNode=(struct Node*)malloc(sizeof(struct Node));
                 sum=temp2->data+prev;
                 if(sum>=10)
                 {
                     rem=sum%10;
                     prev=sum/10;
                     newNode->data=rem;
                     newNode->next=NULL;
                     temp3->next=newNode;
                     temp3=newNode;
                 }
                 else
                 {
                     prev=0;
                     newNode->data=sum;
                     newNode->next=NULL;
                     temp3->next=newNode;
                     temp3=newNode;
                 }
                 temp2=temp2->next;
             }
         }
         else
         {
             while(temp1!=NULL)
             {
                 newNode=(struct Node*)malloc(sizeof(struct Node));
                 sum=temp1->data+prev;
                 if(sum>=10)
                 {
                     rem=sum%10;
                     prev=sum/10;
                     newNode->data=rem;
                     newNode->next=NULL;
                     temp3->next=newNode;
                     temp3=newNode;
                 }
                 else
                 {
                     prev=0;
                     newNode->data=sum;
                     newNode->next=NULL;
                     temp3->next=newNode;
                     temp3=newNode;
                 }
                 temp1=temp1->next;
             }
         }
         if(prev>0)
         {
             newNode=(struct Node*)malloc(sizeof(struct Node));
             newNode->data=prev;
             newNode->next=NULL;
             temp3->next=newNode;
             temp3=newNode;
             prev=0;
         }
         return head3;

     }
 }

 struct Node *alternateAscendingDescending(struct Node *head)
 {
  struct Node *temp1=head;
  struct Node *temp2=NULL;

  if(head==NULL)
  {
      printf("empty list");
      return head;
  }
  else if(head->next==NULL)
  {
      printf("one node only");
      return head;
  }
  else
  {
      int val;
      temp2=temp1->next;
      while(temp1!=NULL && temp1->next!=NULL)
      {
          if(temp2==NULL)
          {
              temp1=temp1->next;
              temp2=temp1->next;
          }
          else if(temp1->data>temp2->data)
          {
              val=temp2->data;
              temp2->data=temp1->data;
              temp1->data=val;
          }
          else
          {
              temp2=temp2->next;
          }
      }
      return head;
   }
 }

 struct Node *positionedEvenOdd(struct Node *head)
 {
  struct Node *temp=head;
  struct Node*odd=NULL;
  struct Node *even=NULL;
  struct Node *temp1=NULL;
  struct Node *temp2=NULL;

  if(head==NULL)
  {
      printf("empty list");
      return head;
  }
 // else if(head->next==NULL)
  //{
   //   printf("one node only");
    //  return head;
 // }
  else
  {
      int count=1;

      while(temp!=NULL)
      {
          if(count%2!=0)
          {
              if(odd==NULL)
              {
                  odd=temp;
                temp1=odd;
                temp=temp->next;
                odd->next=NULL;
                count++;
              }
              else
              {
                  temp1->next=temp;
                  temp=temp->next;
                  temp1=temp1->next;
                  temp1->next=NULL;
                  count++;
              }
          }
        else
        {
            if(even==NULL)
            {
                even=temp;
                temp2=even;
                temp=temp->next;
                temp2->next=NULL;
                count++;
            }
            else
            {
                temp2->next=temp;
                temp=temp->next;
                temp2=temp2->next;
                temp2->next=NULL;
                count++;
            }
        }
      }//while
      head=odd;
      temp1->next=even;
      return head;
  }
 }

 void Triplet(int val,struct Node *head1,struct Node *head2,struct Node*head3)
 {
     struct Node *temp1=head1;
     struct Node *temp2=head2;
     struct Node *temp3=head3;

     while(temp1!=NULL)
     {
         while(temp2!=NULL)
         {
             if(temp1->data+temp2->data+temp3->data==val)
             {
                 printf("found\n %d %d %d",temp1->data,temp2->data,temp3->data);
                 return;
             }
             else
             {

                 if(temp1==NULL)
                   {
                     printf("not found");
                     return;
                   }
                 else if(temp3==NULL)
                 {
                     temp3=head3;
                     temp2=temp2->next;
                     break;
                 }
                else if(temp2==NULL)
                 {
                     temp2=head2;
                     temp1=temp1->next;
                     break;
                 }
               temp3=temp3->next;
             }
         }
     }

 }

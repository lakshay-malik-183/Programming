#include<stdio.h>
#include<conio.h>

struct Node{
    struct Node*prev;
    int data;
    struct Node*next;
};

struct Node *createList(int);
void traverseList(struct Node*);
void reverseOrder(struct Node*);
struct Node* insertAtBeg(struct Node*);
struct Node* insertAtLast(struct Node*);
struct Node*insertAfterNode(struct Node*);
struct Node*deleteBeg(struct Node*);
struct Node*deleteLast(struct Node*);
int countNodes(struct Node*);
struct Node *deleteAfterNode(struct Node *);
struct Node *insertBeforeNode(struct Node *);

struct Node*head=NULL;

void main()
{
    int ch,k;
    char c;
    int size;
    struct Node*head1=NULL;

    do{
        printf("1.create\n2.traverse\n3.reverse order\n4.insert At beg\n5.insert At last\n6.insert after a given node\n");
        printf("7.delete at beg\n8. delete at last\n9.count nodes\n10.delete after node\n");
        printf("11. insert before node\n");
        printf("enter choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter size\n");
                    scanf("%d",&size);
                    head=createList(size);
                    printf("created\n");
                     break;

            case 2:traverseList(head);
                     break;

            case 3: reverseOrder(head);
                     break;

            case 4: head=insertAtBeg(head);
                    printf("Inserted\n");
                        break;

            case 5: head=insertAtLast(head);
                     printf("Inserted\n");
                        break;

            case 6: head=insertAfterNode(head);
                        break;

            case 7: head=deleteBeg(head);
                        break;

            case 8: head=deleteLast(head);
                        break;

            case 9: k=countNodes(head);
                    printf("total Nodes=%d",k);
                        break;

            case 10: head=deleteAfterNode(head);
                        break;

            case 11: head=insertBeforeNode(head);
                        break;

            default: printf("\nwrong choice\n");
                    return;
        }
        printf("\ndo you want to again Y or N");
        fflush(stdin);
        scanf("%c",&c);
        }while(c=='y' || c=='Y');

    }
struct Node*createList(int size)
{
    int val;
    struct Node*temp=NULL;

    struct Node *newNode=NULL;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL)
    {
        printf("no memory");
        return;
    }
    else
    {
        printf("enter value of first node:\n");
        scanf("%d",&val);
         newNode->data=val;
         newNode->prev=NULL;
         newNode->next=NULL;
         head=newNode;
         temp=head;

         for(int i=2;i<=size;i++)
         {
             newNode=(struct Node*)malloc(sizeof(struct Node));
             printf("enter data:\n");
             scanf("%d",&val);
             newNode->data=val;
             newNode->prev=temp;
             newNode->next=NULL;

             temp->next=newNode;
             temp=newNode;
         }

         return head;
    }
}


void traverseList(struct Node* head)
{

    if(head==NULL)
    {
        printf("empty list");
        return;
    }
    else
    {
        struct Node* temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        return;
    }

}

void reverseOrder(struct Node *head)
{
    if(head==NULL)
    {
        printf("empty list\n");
        return;
    }

    else
    {
        struct Node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->prev;
        }
        return;
    }
}

struct Node* insertAtBeg(struct Node*head)
{
    int val;
    struct Node*newNode=NULL;
    struct Node*temp=head;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter data:\n");
    scanf("%d",&val);
    newNode->data=val;
    newNode->prev=NULL;
    newNode->next=temp;

    if(head==NULL)
      {
        printf("empty list\n");

        head=newNode;
        return head;
      }
      else
      {
          head=newNode;
          return head;
      }
}

struct Node* insertAtLast(struct Node*head)
{
    int val;
    struct Node*newNode=NULL;
    struct Node*temp=head;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter data\n");
    scanf("%d",&val);
    newNode->data=val;
    newNode->prev=NULL;
    newNode->next=NULL;

    if(head==NULL)
    {
      head=newNode;
      return head;
    }

    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
         temp->next=newNode;
          newNode->prev=temp;
          return head;
    }
}



struct Node*insertAfterNode(struct Node*head)
{
    if(head==NULL)
    {
        printf("empty list");
        return NULL;
    }
    else
    {
        int node,flag=0;
        printf("enter node data where to insert: ");
        scanf("%d",&node);
        struct Node*temp=head;

            while(temp!=NULL)
            {
                if(temp->data==node)
                {
                    flag=1;
                    break;
                }

                temp=temp->next;
            }

            if(flag==0)
            {
                printf(" not found\n ");
                return head;
            }
            else
            {
                struct Node*next=temp->next;
                int val;

                struct Node*newNode=NULL;
                newNode=(struct Node*)malloc(sizeof(struct Node));
                printf("enter data");
                scanf("%d",&val);
                newNode->data=val;
                newNode->next=NULL;
                newNode->prev=NULL;

                temp->next=newNode;
                newNode->prev=temp;
                newNode->next=next;
                next->prev=newNode;

            }
            return head;
        }

}

struct Node*deleteBeg(struct Node*head)
{
    if(head==NULL)
    {
        printf("empty list\n");
        return NULL;
    }
    else
    {
        struct Node*temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
        return head;
    }
}

struct Node*deleteLast(struct Node*head)
{
    struct Node *temp=head;
    if(head==NULL)
    {
        printf("empty list\n");
        return NULL;
    }
    else if(head->next==NULL)
    {
        free(temp);
        head=NULL;
        return head;

    }
    else
    {
        struct Node*temp=head,*prev=NULL;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);
        return head;

    }
}

int countNodes(struct Node*head)
{
    if(head==NULL)
    {
        printf("empty List");
        return 0;
    }
    else
    {
        int count=0;
        struct Node*temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
}



struct Node *deleteAfterNode(struct Node *head)
{
    struct Node*temp=NULL;
    temp=head;
    int flag=0;

    if(head==NULL)
        {
        printf("empty linklist");
        return NULL;
        }

    else
        {
            int val;
            printf("enter data of node after you want to delete node: ");
            scanf("%d",&val);
            while(temp!=NULL)
            {
                if(temp->data==val)
                {
                    if(temp->next==NULL)
                    {
                        printf("only one node in linklist so we cant delete");
                        flag=1;
                        return head;
                    }
                   else if(temp->next->next!=NULL)
                    {
                        struct Node*temp1=NULL;
                        struct Node*del=NULL;
                        temp1=temp->next->next;
                        del=temp->next;
                        del->next=NULL;
                        del->prev=NULL;
                        temp->next=temp1;
                        temp1->prev=temp;
                        free(del);
                        flag=1;
                        return head;
                    }
                    else if(temp->next!=NULL)
                    {
                        struct Node *del=NULL;
                        del=temp->next;
                        del->prev=NULL;
                        temp->next=NULL;
                        free(del);
                        flag=1;
                        return head;
                    }

                }
                else
                {
                    temp=temp->next;
                }
            }
            if(flag==0)
            {
                printf("we cant delete bcoz entered node data not found");
            }
        }
}
struct Node * insertBeforeNode(struct Node *head)
{
 struct Node*temp=head;
 struct Node *temp1=NULL;
 struct Node *newNode=NULL;
     int val;

     if(head==NULL)
     {
         printf("list is empty so you cant find node whom you want to insert before");
         return NULL;
     }
     else
     {
         printf("enter data of NewNode which you want to insert\n ");
         scanf("%d",&val);
         newNode=(struct Node *)malloc(sizeof(struct Node));

         newNode->data=val;
         newNode->next=NULL;
         newNode->prev=NULL;
         fflush(stdin);

         printf("enter data of node whom you want  to find \n");
         scanf("%d",&val);

         while(temp!=NULL)
         {
             if(temp->data==val)
             {
                 if(head->next==NULL)
                 {
                     head=newNode;
                     newNode->next=temp;
                     temp->prev=newNode;
                     return head;
                 }
                 else
                 {
                     temp1->next=newNode;
                     newNode->prev=temp1;
                     newNode->next=temp;
                     temp->prev=newNode;
                     temp=head;
                     return head;
                 }
             }
             else
             {
                 temp1=temp;
                 temp=temp->next;
             }
         }
         printf("enter data of node Not Found");
     }
}

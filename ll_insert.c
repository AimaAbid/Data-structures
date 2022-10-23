//0
#include<stdio.h>
#include<stdlib.h>

void create();
void view();
void insert();

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL,*tail=NULL,*trav;

int main()
{
    int ch;
    while(1)
    {
        printf("1 for create,2 for view,3 for insert,4 for exit\n");
        scanf("%d",&ch);


        if(ch==1)
         create();

        if(ch==2)
         view();

        if(ch==3)
         insert();

        if(ch==4)
         break;
    }
    return 0;
}


void create()
{
    int n,i;

    struct Node*temp;
    printf("Enter the number of nodes you want to create\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));

        printf("Enter the data\n");
        scanf("%d",&temp->data);

        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }

    }
}


void view()
{
    struct Node*trav;
    trav=head;
    while(trav!=NULL)
    {
        printf("%d\n",trav->data);
        trav=trav->next;
    }
}

void insert()
{
    struct Node*trav;
    struct Node*temp;

    temp=(struct Node*)malloc(sizeof(struct Node));
    

    
    int node;
    printf("Enter the node after which you want to insert the data\n");
    scanf("%d",&node);

    printf("Enter the data which you want to insert\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    
    
    trav=head;
    while(trav->data!=node)
    {
        trav=trav->next;
    }

    if(trav->next!=NULL)
    {
     temp->next=trav->next;
     trav->next=temp;

    }

    else
    {
        temp->next=trav->next;
        trav->next=temp;
        tail=temp;

    }




}
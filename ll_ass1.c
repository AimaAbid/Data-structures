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
        printf("1 for create,2 foe view,3 for insert,4 for exit\n");
        scanf("%d",&ch);


        if(ch==1)
         create();

        else if(ch==2)
         view();

        else if(ch==3)
         insert();

        else
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
    int node,value,ch;
    printf("Enter the value you want to insert");
    scanf("%d",&value);

    printf("Press 1 to insert after a node and 2 to insert before a node\n");
    scanf("%d",&ch);
    
    if(ch==1)
    {
     printf("Enter the data value of the node after which you want to insert");
     scanf("%d",&node);

     struct Node*temp;
     temp=(struct Node*)malloc(sizeof(struct Node));
     temp->data=value;
    
     struct Node*trav;
     trav=head;
     while(trav->data != node)
     {
        trav=trav->next;
     }

     temp->next=trav->next;
     trav->next=temp;
    }
    if(ch==2)
    {
        printf("Enter the value of node before which you want to add anode\n");
        scanf("%d",&node);

     struct Node*temp;
     temp=(struct Node*)malloc(sizeof(struct Node));
     temp->data=value;
    
     struct Node*trav;
     struct Node*pretrav;

     trav=head;
     pretrav=head;
     while(trav->data != node)
     {
        trav=trav->next;//trav has reached the node before which we want to
     }                  //insert a node

     while(pretrav->next !=trav)
     {
        pretrav=pretrav->next;//pretrav stays one node before of trav
     }

     temp->next=pretrav->next;
     pretrav->next=temp;
    }
    

}
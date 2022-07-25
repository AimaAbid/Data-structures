#include<stdio.h>
#include<stdlib.h>

void create();
void view();

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
        printf("1 for create,2 foe view,3 for exit\n");
        scanf("%d",&ch);


        if(ch==1)
         create();

        if(ch==2)
         view();

        if(ch==3)
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
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};

struct Node *head=NULL,*tail,*trav;

void create();
void view();

int main()
{
    int ch;
    while(1)
    {
    
     printf("Enter 1 for create 2 for view and 3 for exit \n");
     scanf("%d",&ch);
     if(ch==1)
      create();

     if(ch==2)
      view();
    
     if(ch==3)
      break;
    }
}

void create()
{
    int i,n;
    struct Node*temp;
    

    printf("How many nodes you want to make \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));

        printf("Enter the element\n");
        scanf("%d",&temp->data);

     if(head==NULL)
     {
        head=temp;
        tail=temp;
        tail->next=temp;

     }

     else
     {
        tail->next=temp;
        temp->next=head;
        tail=tail->next;
     }

    }

}

void view()
{
    trav=head;
    while(trav != tail)
    {
        printf("%d ",trav->data);
        trav=trav->next;
    }
     printf("%d \n",trav->data);


    
}



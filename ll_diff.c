#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};

struct Node*head=NULL,*tail=NULL;

void Create();
void View();

int main()
{
    int ch;
    while(1)
    {
        printf("Enter 1 to create\n2 for view\n3 for exit\n  ");
        scanf("%d",&ch);
    

    if(ch==1) Create();
    else if(ch==2) View();
    else break;
    }

    return 0;
}

void Create()
{
    int element;
    printf("Enter the element you want to add to linked list\n");
    scanf("%d",&element);

    struct Node*temp;
    temp=(struct Node*)malloc(sizeof(struct Node));

    temp->data=element;
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }

    else
    {
        tail->next=temp;//as node is added from back side temp 
        tail=temp;//should always be conxted to tail

    }
}

void View()
{
    struct Node*trav;
    trav=head;
    while(trav!=NULL)
    {
        printf("%d  ",trav->data);
        trav=trav->next;
    }
}
#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node*next;
};
struct Node*top=NULL;

void push(int item);
int pop();
void view();


int main()
{
    int ch,item;
    while(1)
    {
        printf("Enter 1 for push 2 for pop ,3 for view 4 for exit\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("Enter the element you want to push\n");
            scanf("%d",&item);
            push(item);
        }

        if(ch==2)
        {
            item=pop();
            if(item==-1)
            {
                printf("Underflow\n");

            }

            else
            {
                printf("%d\n",item);
            }
        }

        if(ch==3)
        {
            
            view();
        }

        if(ch==4)
        {
            break;
        }
    }

    
    return 0;
}

void push(int item)
{
    struct Node*temp;
    temp=(struct Node*)malloc(sizeof(struct Node));

    temp->next=NULL;
    temp->data=item;

    if(top==NULL)
    {
        top=temp;
    }

    else
    {
        temp->next=top;
        top=temp;
    }

}


int pop()
{
    int item;
    if(top==NULL)
    {
        return -1;
    }
    else
    {
        struct Node*temp;
        temp=(struct Node*)malloc(sizeof(struct Node));
        item=top->data;
        temp=top;
        top=top->next;
        free(temp);
        return item; 
    }
}

void view()
{
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        
        struct Node*trav;
        trav=top;

        while(trav!=NULL)
        {
            printf("%d\n",trav->data);
            trav=trav->next;
        }

    }
}
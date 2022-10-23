#include<stdio.h>
#define MAX 100
int Stack[MAX];
int top=-1;

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
    if(top==MAX)
    {
        printf("Overflow\n");
    }

    else
    {
        Stack[++top]=item;
    }
}


int pop()
{
    
    int item;
    if(top==-1)
    {
        return -1;
    }

    else
    {
        item=Stack[top--];
        return item;
    }
    
}

void view()
{
    int i;
    

    if(top==-1)
    {
        printf("Stack is empty\n");
    }

    else
    {
     for(i=0;i<=top;i++)
     {
        printf("%d\n",Stack[i]);

     }
    }
}
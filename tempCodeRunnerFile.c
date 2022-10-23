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
//0
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100
int Stack[MAX];
char expr[100]="235*+";
int top=-1;

int is_operator(char);
int evaluate(int,int,char);
void push(int);
int pop();


int main()
{
    int i=0,a,b,r,ans;
    while(expr[i]!='\0')
    {
        if(! is_operator)//digit
        {
            printf("push %d\n",expr[i]-48);
            push(expr[i]-48);
        }
        else
        {
           a=pop();
           printf("a=%d\n",a);
           b=pop();
           printf("b=%d\n",b);
           r=evaluate(b,a,expr[i]);
           printf("r=%d\n",r);
           push(r);

        }
        i++;
    }
    ans=pop();

    printf("The answer is %d\n ",ans);
    
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

int is_operator(char a)
{
    if(a=='+' || a=='-' || a=='*' || a=='/' || a=='%' ||a=='^')
    {
        printf("operator hai\n");
        
        
        return 1;
    }
    else
    {
        printf("digit hai\n");

        return 0;
    }
}

int evaluate(int b,int a,char c)
{
    if(c=='+')
    {
        return b+a;
    }

    else if(c=='-')
    {
        return b-a;
    }

    else if(c=='*')
    {
        return b*a;
    }

    else if(c=='/')
    {
        return b/a;
    }

    else if(c=='%')
    {
        return b%a;
    }
    else if(c=='^')
    {
        return pow(b,a);
    }

    else
    {
        return 0;
    }
}


#include<stdio.h>

void linear_search(int a[],int,int);

int main()
{
    int a[100];
    int n,i,item;
    printf("Enter the element you want to search\n");
    scanf("%d",&item);
    printf("Enter the  size of array on which you want to do linear search\n");
    scanf("%d",&n);

    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    linear_search(a,n,item);
}

void linear_search(int a[],int n,int item)
{
    int i,flag=0,pos;
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            flag=1;
            pos=i+1;
            break;
        }
    }

    if (flag==1)
    {
        printf("Item is found at pos %d\n",pos);
    }

    else
    {

        printf("Item not found\n");
    }




}
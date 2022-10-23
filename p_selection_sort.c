#include<stdio.h>

void selection_sort(int a[],int size);
int main()
{
    int size,a[100];
    printf("Enter the size of array you want to sort\n");
    scanf("%d",&size);

    printf("Enter the elements of array you want to sort\n");
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }

    selection_sort(a,size);
    
    return 0;
}

void selection_sort(int a[],int size)
{
    int big,pos,temp;
    for(int i=0;i<size-1;i++)//5 times
    {
        big=a[0];
        pos=0;

        for(int j=1;j<size-i;j++)//last index then secomd last
        {
            if(big<a[j])
            {
                big=a[j];
                pos=j;
            }
        }

        temp=a[pos];
        a[pos]=a[size-1-i];
        a[size-1-i]=temp;




    }

    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}
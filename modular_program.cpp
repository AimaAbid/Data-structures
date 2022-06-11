#include<iostream>
using namespace std;

void scan(int a[],int n);
int add(int a[],int n);
int product(int a[],int n);
void display(int a[],int n);

int main()
{
    int a[20];
    int n,sum,multi;

    cout<<"Enter the size of array"<<endl;
    cin>>n;

    scan(a,n);
    sum=add(a,n);
    multi=product(a,n);
    cout<<"sum ="<<sum<<endl<<"product= "<<multi<<endl;
    
    return 0;
}

void scan(int a[],int n)
{
    int i;
    cout<<"enter the elements of array"<<endl;
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
}

int add(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    return sum;
}

int product(int a[],int n)
{
    int i,multi=1;
    for(i=0;i<n;i++)
    {
        multi=multi*a[i];
    }

    return multi;
}
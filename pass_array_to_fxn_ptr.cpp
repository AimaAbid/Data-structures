#include<iostream>
using namespace std;


void display(int a[],int size);
int main()
{
    int a[5]={1,2,3,4,5},i;
    int size=5;
    display(&a[0],size);//when we pass an array to fxn in reality we are passing the 
    //base adress,size and type of array
    
    return 0;
}

void display(int *ptr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<*ptr;
        ptr++;
    }
}
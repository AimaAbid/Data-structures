#include<iostream>
using namespace std;

int main()
{
    int a[50];
    int i,size,temp;
    
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<size;i++)//scan
    {
        cin>>a[i];
    }

    cout<<"Enter the element you want to delete"<<endl;
    cin>>temp;


    for(i=0;i<size;i++)//copy elements 
    {
        if(a[i]==temp)
        {
            for(int j=i;j<size-1;j++)
            {
             a[j]=a[j+1];
            }
        }
    }

    size=size-1;//reduce size of array

    for(i=0;i<size;i++)//primt array
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}
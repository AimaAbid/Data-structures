#include<iostream>
using namespace std;

int main()
{
    int temp;
    int a[5]={1,2,3,4,5};
    cout<<"Enter the element to be removed"<<endl;
    cin>>temp;

    for(int i=0;i<5;i++)
    {
        if(a[i]==temp)
        {
            a[i]=-1;
            break;
        }

        
    }

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
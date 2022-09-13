#include<stdio.h>

void Toh(int num,char,char,char);
int main()
{
    int n=4;
    Toh(n,'A','B','C');
    return 0;
}

void Toh(int num,char beg,char mid,char end)
{
    if(num==1)
    {
        printf("%c -> %c \n",beg,end);
    }

    else
    {
        Toh(num-1,beg,end,mid);
        printf("%c -> %c\n",beg,end);
        Toh(num-1,mid,beg,end);
    }
}
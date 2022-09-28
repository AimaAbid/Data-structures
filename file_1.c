//read
#include<stdio.h>
int main()
{
    FILE*ptr=NULL;
    char string[66];

    ptr=fopen("aima.txt","r");
    fscanf(ptr,"%s",string);
    printf("The content of string is %s",string);
    return 0;
}
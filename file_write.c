#include<stdio.h>
int main()
{
    FILE*ptr=NULL;
    char string[66]="What remains of us if not our stories";

    ptr=fopen("aima.txt","a");
    fprintf(ptr,"%s",string);
    

   

    return 0;
}
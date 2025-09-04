#include<stdio.h>
int main()
{
    FILE *as;
    as=fopen("rakib.txt","r");
    int i;
    while(1)
    {

        i=fgetc(as);
        if(i==EOF)
        {
            break;
        }
        printf("%c",i);
    }
     fclose(as);
    return;

}

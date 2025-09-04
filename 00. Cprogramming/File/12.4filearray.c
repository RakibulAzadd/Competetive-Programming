#include<stdio.h>
int main()
{

    FILE *fp;
    fp=fopen("list.txt","w+");
    char name[20];
    int roll=0,i;
    for( i=0;i<3;i++)
    {

        printf("enter the name and roll :\n");
        scanf("%s%d",name,&roll);
        fprintf(fp,"%s %d\n",name,roll);
    }
     fclose(fp);
}

#include<stdio.h>
int main()
{

    FILE *fp;
    fp=fopen("toki.txt","r");
    int c=fgetc(fp);

    printf("the chaachter is  %c \n",c);

    char buf[100];
    fscanf(fp,"%s",buf);
    printf("the full string : %s\n",buf);
    fgets(buf,10,fp);
    printf("next buf : %s ",buf);
    fclose(fp);

    return 0;
}


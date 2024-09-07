
#include<stdio.h>
#include<stdlib.h>
int main()
{

    FILE *fp;
    fp=fopen("list.txt","r");
    int code,sum=0;
    char b[20];
    while(1)
    {

        code=fscanf(fp,"%s",b);
        if(code==EOF)
        {
            break;
        }
        printf("%s\n",b);
        code=fscanf(fp,"%s",b);
        if(code==EOF)
        {
            break;
        }
        printf("%s\n",b);
        sum+= atoi(b);

    }
    printf("%d",sum);
    fclose(fp);

}

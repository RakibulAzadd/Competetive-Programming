#include<stdio.h>
int main()
{

    FILE *fp;
    fp = fopen("rakib.txt","w");
    int i=65;
    fputc(i,fp);
    char arr[100]="I am Rakib";

    fputs(arr,fp);

    fprintf(fp, " My id is %d\n ", 1902028);

    fclose(fp);

 return 0;
}

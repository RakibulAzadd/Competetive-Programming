#include<stdio.h>
int main()
{
    int a=2,b=2;
    int a1[a][b],a2[a][b],ans[a][b];
    int i,j,k;
    printf("Enter a matrix is : \n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter a matrix is : \n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            ans[i][j]=0;
        }
    }

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<b;k++)
            {
                ans[i][j]+= a1[i][k]*a2[k][j];
            }
        }
    }
     printf("multiply matrix is : \n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%d  ",ans[i][j]);
        }
        printf("\n");
    }



}

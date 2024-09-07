#include<stdio.h>
void exchange(int *p, int *q)
{

    int t;
    t=*p;
    *p=*q;
    *q=t;
}
int main()
{

    int x,y;
    x=100,y=200;
    printf("Before exchange x= %d  y= %d \n",x,y);
    exchange(&x,&y);

    printf("AFTER exchange x= %d  y= %d \n",x,y);
    return 0;
}

#include<stdio.h>
int  exchange(int *p, int *q)
{

     if(*p>*q)return p;
     else return q;
}
int main()
{

    int x,y;
    x=100,y=200;
    printf("Before exchange x= %d  y= %d \n",x,y);
   int *p= exchange(&x,&y);

    printf(" max value= %d  \n",*p);
    return 0;
}


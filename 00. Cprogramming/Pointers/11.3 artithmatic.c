#include<stdio.h>
int main()
 {

     int a,b,*p1,*p2,x,y,z;
     a=12,b=4;
     p1=&a;
     p2=&b;
     x=*p1 * *p2;
     printf("x value of mul = %d \n",x);
     y= 4* - *p1;
     printf("y value of dub = %d \n",y);
 }

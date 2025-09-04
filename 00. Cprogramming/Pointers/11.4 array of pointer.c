#include<stdio.h>
int main()
 {

   int *p,sum,i;
   int x[5]={5,9,6,3,7};
   i=0;
   p=&x;
   while(i<5)
   {

       printf("x[%d] %d %u\n",i,*p,p);
       i++, p++;
   }
 }

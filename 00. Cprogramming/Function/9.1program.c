#include<stdio.h>
int fact(int v);
int main()
{
    int n=3;
   int ans=fact(n);
   printf("%d",ans);

   return 0;
}
int fact(int n)
 {
     if(n==1)
        return 1;
     else
     {
         return n*fact(n-1);
     }
 }

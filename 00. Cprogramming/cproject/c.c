#include<stdio.h>
int main(){
 int arr[2][3]={1,2,3,4,5,6};
 int (*p)[2][3]=&arr;
 int (*q)[3]=&arr[0];
  printf("%p %p %p \n",&arr,&arr+1,p+1);
  printf("%p %p %p \n",&arr[0],&arr[0]+1,q+1 );
return 0;
}

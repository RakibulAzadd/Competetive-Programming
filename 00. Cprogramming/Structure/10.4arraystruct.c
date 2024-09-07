#include<stdio.h>
struct marks
{
    int sub1;
    int sub2;
    int sub3;
    int  total;
};
int main()
 {

     int i;
     struct marks student[3]={{25,67,81,0},{75,67,69,0},{100,36,71,0}};
     struct marks alltotal;
     for(i=0;i<=2;i++)
     {

         student[i].total=student[i].sub1+student[i].sub2+student[i].sub3;

         alltotal.sub1=alltotal.sub1+student[i].sub1;
         alltotal.sub2=alltotal.sub2+student[i].sub2;
         alltotal.sub3=alltotal.sub3+student[i].sub3;
     }

     for(i=0;i<=2;i++)
     {

         printf("total number in student[%d] = %d \n",i+1,student[i].total);
     }
     printf("total subject number 1 = %d \n",alltotal.sub1);

 }

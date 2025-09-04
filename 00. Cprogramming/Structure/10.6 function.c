#include<stdio.h>
struct student
 {
    char name[50];
    int roll ;

 };
  void display(struct student p);
  int main()
   {
       struct student s1;
       scanf("%[^\n]%*c",&s1.name);
       scanf("%d",&s1.roll);
       display(s1);
   }
   void display(struct student p)
    {

        printf("student name = %s\n",p.name);
        printf("student roll = %d\n",p.roll);
    }

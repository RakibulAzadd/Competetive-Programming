#include<stdio.h>
struct name{
   int age;
   float wt;
};
int main()
{


    struct name ra, *ru;
    scanf("%d",&ra.age);
    ru=&ra;
    printf("%d",ru->age);
    scanf("%d",&ru->age);
    printf("%d",ru->age);

}

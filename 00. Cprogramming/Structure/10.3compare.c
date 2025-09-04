#include<stdio.h>
struct Books
{
    char name[50];
    int page ;
    float price ;
};
int main()
{
    struct Books   a1= { "RAKIB",799,49.33 };
    struct Books   a2= { "RAKIB",799,49.33 };
    struct Books a3;
    a3=a1;
    int x;
    x=((a1.page==a2.page)&& a2.price==a1.price) ? 1 : 0;
    if(x==1){

            printf("Book name = %s\n",a3.name);
            printf("Book page = %d\n",a3.page);
            printf("Book price = %f\n",a3.price);
    }
    else
    {

        printf("Differnt");
    }

}




#include<stdio.h>
struct Books
{
    char name[50];
    int page ;
    float price ;
};
int main()
{
    struct Books a2, a1={ "RAKIB",799,49.33 };

    printf("Book name = %s\n",a1.name);
    printf("Book page = %d\n",a1.page);
    printf("Book price = %f\n",a1.price);

}



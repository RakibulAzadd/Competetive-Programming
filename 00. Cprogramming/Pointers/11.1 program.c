#include<stdio.h>
int main()
{
    int x;
    x=10;
    printf(" address of x = %u  \n", &x);
    int *p;

    printf(" address of p = %u  \n", &p);
    p=&x;
    printf(" value of p = %u  \n", p++);

    printf(" value of p = %u  \n", p);
    p=&x;
    printf(" value of x = %d  \n", *p);
}

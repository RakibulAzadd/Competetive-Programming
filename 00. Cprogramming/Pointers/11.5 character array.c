#include<stdio.h>
#include<string.h>
int main()
{
    char string[]="abcdefghij";
    char *ptr;
    ptr=string;
   printf("The string is : ");
   int len=0;
    while(*ptr!= '\0')
    {
        printf("%c is stored at address %d\n",*ptr,ptr);
        ptr++;
        len++;
    }
    printf("%d \n", len);
}

#include<stdio.h>

int main()
{
char str[100];
char ch;
int i, vowel,consonant;
i=vowel=consonant=0;
printf("enter a string:");
gets(str);
while((ch=str[i])!='\0')
{
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
vowel++;
else if(ch>='a'&& ch<='z'|| ch>='A'&& ch<='Z')
consonant++;
i++;
}



    printf("%d\n", vowel);
    printf("%d\n",consonant );
    return 0;
}

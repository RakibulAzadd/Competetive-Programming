#include<stdio.h>
struct marks
{
    int sub[3];

    int  total;
};
int main()
{

    int i,j;
    struct marks student[3]= {25,67,81,0,75,67,69,0,100,36,71,0};
    struct marks alltotal;
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            student[i].total +=student[i].sub[j];
        }


    }

    for(i=0; i<=2; i++)
    {

        printf("total number in student[%d] = %d \n",i+1,student[i].total);
    }

}


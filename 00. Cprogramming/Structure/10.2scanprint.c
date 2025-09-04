#include<stdio.h>
struct personal
{
    char name[50];
    int day ;
    char month[30];
    int year;
    float salary;
};
int main()
{
    struct personal person;
    printf("input values  \n");
    scanf("%s%d%s%d%f",&person.name,&person.day,&person.month, &person.year,&person.salary);



    printf("Name = %s \n",person.name);
    printf("Date : %d ",person.day);
    printf(" %s ",person.month);
    printf(" %d \n",person.year);
    printf("salary = %f\n",person.salary);


}



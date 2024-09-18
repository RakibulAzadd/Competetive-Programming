#include<stdio.h>

struct student
{
    int s_id,batch,age;
    char name[100],department[100];
};


int main()
{
    void add();
    void del();
    void search();
    void disply();
    while(1)
    {
        printf("\n\n\n\n");
        printf("\n\t\t 1. add a student record  \t\t\n");
        printf("\n\t\t 2. Delete a student record  \t\t\n");
        printf("\n\t\t 3. search a student record  \t\t\n");
        printf("\n\t\t 4. Display all student  \t\t\n");
        printf("\n\t\nEnter a number : ");
        int a;

        scanf("%d",&a);
        switch(a)
        {
        case 1:
        {
            system("cls");
            add();
            break;
        }
        case 2:
        {
            system("cls");
            del();
            break;
        }
        case 3:
        {
            system("cls");
            search();
            break;
        }
        case 4:
        {
            system("cls");
            display();
            break;
        }

        }


    }



}

void add()
{

    struct student s;
    FILE *fp;
    fp=fopen("student.txt","ab");


    printf("\n\t\t Student ID: ");
    scanf("%d",&s.s_id);
    printf("\n\t\t Name      : ");
    scanf("%s",s.name);
    printf("\n\t\t Age       : ");
    scanf("%d",&s.age);
    printf("\n\t\t Batch     : ");
    scanf("%d",&s.batch);
    printf("\n\t\t Department: ");
    scanf("%s",s.department);

    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);

}
void del()
{
    FILE *fp;
    FILE *tp;
    struct student s ;
    fp=fopen("student.txt","rb");
    tp=fopen("temp.txt","wb");
    int id,found=0;
    printf("\n\t\tEnter a Student ID : ");
    scanf("%d",&id);
    while(1)
    {
        fread(&s,sizeof(s),1,fp);
        if(feof(fp))
        {
            break;
        }
        if(s.s_id==id)
        {
            found++;

        }
        else
        {
            fwrite(&s,sizeof(s),1,tp);
        }
    }

    fclose(fp);
    fclose(tp);
    if(found==0)
    {
        printf("not Found");
    }
    else
    {
        fp=fopen("student.txt","wb");
        tp=fopen("temp.txt","rb");
        while(1)
        {
            fread(&s,sizeof(s),1,tp);
            if(feof(tp))
            {
                break;
            }
            fwrite(&s,sizeof(s),1,fp);
        }
        fclose(fp);
        fclose(tp);
    }
}
void search()
{
    FILE *fp;
    fp=fopen("student.txt","rb");
    struct student s;
    int id,found=0;
    printf("\n\t\tEnter a Student ID : ");
    scanf("%d",&id);
    while(1)
    {
        fread(&s,sizeof(s),1,fp);
        if(feof(fp))
        {
            break;
        }
        if(s.s_id==id)
        {
            found++;
            printf("\n Student ID : %d",s.s_id);
            printf("\t\t Name: %s",s.name);
            printf("\t\t Age: %d",s.age);
            printf("\t\t Batch: %d",s.batch);
            printf("\t\t Department : %s",s.department);
        }
    }

    if(found==0)
    {
        printf("\n\t\t\t Not Found \t\t\t");
    }
    fclose(fp);
}
void display()
{
    FILE *fp;
    fp=fopen("student.txt","rb");
    struct student s;

    printf("\t\t\t\t\t All Student Details\t\t\n\n");

    while(1)
    {
        fread(&s,sizeof(s),1,fp);
        if(feof(fp))
        {
            break;
        }
        printf("\n Student ID : %d",s.s_id);
        printf("\t\t Name: %s",s.name);
        printf("\t\t Age: %d",s.age);
        printf("\t\t Batch: %d",s.batch);
        printf("\t\t Department : %s",s.department);
    }
    fclose(fp);
}

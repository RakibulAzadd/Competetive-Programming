#include<stdio.h>

struct student
{
    int sid,age,batch;
    char name[100],department[100];

};

int main()
{
    void add();
    void del();
    void search();
    void display();
    while(1)
    {
        printf("\n\n\n\t\t\t\t Welcome to Student database \t\t \n\n\n");
        printf("\n\t\t 1. Create a student Record \t");
        printf("\n\t\t 2. Delete a student Record \t");
        printf("\n\t\t 3. Search a student Record \t");
        printf("\n\t\t 4. Display all student Record \t");
        printf("\n\t\t 5. Exit \t");
        printf("\n\n\t Enter a number: ");
        int a ;
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
        case 5:
        {
            exit(0);
        }
        default:
        {
            exit(0);
        }

        }

    }

    return 0;
}
void add()
{
    FILE *fp;
    fp=fopen("campus.txt","ab");
    struct student s;
    printf("\n\n\n\t\t\t\t Enter student Record \t\t \n\n\n");
    printf("\n\t\t Student ID: ");
    scanf("%d",&s.sid);
    printf("\n\t\t Name      : ");
    scanf("%s",&s.name);
    printf("\n\t\t Age       : ");
    scanf("%d",&s.age);
    printf("\n\t\t Batch     : ");
    scanf("%d",&s.batch);
    printf("\n\t\t Department: ");
    scanf("%s",&s.department);
    fwrite(&s,sizeof(s),1,fp);

    fclose(fp);

}
void del()
{   FILE *fp;
    FILE *tp;
    fp=fopen("campus.txt","rb");
    tp=fopen("tm.txt","wb");
    struct student s;

     int id,found=0;
    printf("\n\t\tEnter a Student ID : ");
    scanf("%d",&id);
    while(1){
        fread(&s,sizeof(s),1,fp);
        if(feof(fp)){
            break;
        }
        if(s.sid==id){
            found++;
        }
        else {
            fwrite(&s,sizeof(s),1,tp);
        }
    }
    fclose(fp);
    fclose(tp);
    if(found==0){
        printf("\n\n\n\t student Record not found \t\t \n\n\n");
    }
    else {
        fp=fopen("campus.txt","wb");
        tp=fopen("tm.txt","rb");
        while(1){
            fread(&s,sizeof(s),1,tp);
            if(feof(tp)){
                break;
            }
            fwrite(&s,sizeof(s),1,fp);
        }
     fclose(fp);
    fclose(tp);
            printf("\n\n\n\t student Record delete Successfully\t\t \n\n\n");
    }


}
void search()
{
    FILE *fp;
    fp=fopen("campus.txt","rb");
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
        if(s.sid==id)
        {
            found++;
            printf("\n\n\n\t\t\t\t Find  student Record \t\t \n\n\n");
            printf("\n\tStudent ID: %d",s.sid);
            printf("\t Name: %s",s.name);
            printf("\t Age: %d",s.age);
            printf("\tBatch: %d",s.batch);
            printf("\tDepartment: %s",s.department);
        }
    }
    if(found==0)
    {
        printf("\n\n\n\t student Record not found \t\t \n\n\n");
    }
    fclose(fp);
}
void display()
{

    FILE *fp;
    fp=fopen("campus.txt","rb");
    struct student s;

    printf("\n\n\n\t\t\t\t Display All student Record \t\t \n\n\n");
    while(1)
    {
        fread(&s,sizeof(s),1,fp);
        if(feof(fp))
        {
            break;
        }
        printf("\n\tStudent ID: %d",s.sid);
        printf("\t Name: %s",s.name);
        printf("\t Age: %d",s.age);
        printf("\tBatch: %d",s.batch);
        printf("\tDepartment: %s",s.department);
    }
    fclose(fp);
}


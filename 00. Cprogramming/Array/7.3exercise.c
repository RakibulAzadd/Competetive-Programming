#include<stdio.h>
int main()
{
    int arr[5];
    int c1=0,c2=0,c3=0,c4=0,c5=0,valid=0,nonvalid=0,i;

    for(i=0; i<5; i++)
    {

        scanf("%d",&arr[i]);

    }
    for(i=0; i<5; i++)
    {

        if(arr[i]==1)
            c1++;
        else if(arr[i]==2)
            c2++;
        else if(arr[i]==3)
            c3++;
        else if(arr[i]==4)
            c4++;
        else if(arr[i]==5)
            c5++;
        else
            nonvalid++;
    }
    printf("votes to candidate1= %d\n",c1);
    printf("votes to candidate2= %d\n",c2);
    printf("votes to candidate3= %d\n",c3);
    printf("votes to candidate4= %d\n",c4);
    printf("votes to candidate5= %d\n",c5);

    valid=5-nonvalid;
    printf("he number of valid votes is:% d\n",valid);

    printf("The number of spoilt votes is: %d\n",nonvalid);

 return 0;
}

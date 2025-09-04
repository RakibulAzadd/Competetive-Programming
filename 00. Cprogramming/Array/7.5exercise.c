#include<stdio.h>
int main()
{
   int i,j,n=3,sub1,sub2,sub3,roll;
   int arr[n][4];
   for(i=0;i<n;i++)
   {
       for(j=0;j<4;j++)
       {
           scanf("%d",&arr[i][j]);
       }
   }
   int hisub1=0,hisub2=0,hisub3=0;
   for(i=0;i<n;i++)
   {
     if(arr[i][1]>hisub1)
     {
         hisub1=arr[i][1];
     }
     if(arr[i][2]>hisub2)
     {
         hisub2=arr[i][2];
     }
     if(arr[i][3]>hisub3)
     {
         hisub3=arr[i][3];
     }

   }
   int total_marks=0,mxtotal_marks=0,roll_no;
   for(i=0;i<n;i++)
   {
       for(j=1;j<4;j++)
       {
           total_marks+=arr[i][j];
       }
       if(mxtotal_marks<total_marks)
       {
           mxtotal_marks=total_marks;
           roll_no=arr[i][0];
       }
       total_marks=0;

   }

  printf("subjet1 max marks = %d\n",hisub1);
  printf("subjet2 max marks = %d\n",hisub2);
  printf("subjet3 max marks = %d\n",hisub3);

  printf("roll no : %d the highest total marks = %d\n",roll_no,mxtotal_marks);




 return 0;
}

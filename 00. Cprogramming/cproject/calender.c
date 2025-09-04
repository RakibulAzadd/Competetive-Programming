#include<stdio.h>

 int first_day(int year){
     int day = (year*365 + ((year-1)/4)-((year-1)/100) +((year-1)/400))%7;
     return day;
 }
int main(){
      char *month[]={"January","February","March","May","June","July","August","September","October","November","December"};
      int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
       int a=2024;
       if((a%4==0 && a%100!=0) || a%400==0) daysInMonth[1]=29;
      
      
        int i,j,totalDays,space=first_day(a);
          printf("space%d",space);
            
        for(i=0;i<12;i++){
            printf("\n\n  ---------------- %s ----------------- \n",month[i]);
            printf("\n  Sun   Mon  Tue  Wed  Thu  Fri  Sat \n\n");
           totalDays=daysInMonth[i];
            for(j=0;j<space;j++){
                printf("     ");
            }
             int week=space;
             for(j=1;j<=totalDays;j++){
              printf("%5d",j);
              if(week++ ==6){
                   printf("\n");
                   week=0;
              }
             }
             space=week;
             
        }
       
    return 0;
}
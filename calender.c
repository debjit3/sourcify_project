#include<stdio.h>
#include<conio.h>
int main()
{
    int Months, Years, Days_of_weeks,Days_of_months,StartingDay,i;
    printf("enter the year:");
    scanf("%d",&Years);
    printf("enter Months(1-12):");
    scanf("%d",&Months);
    
    //day of month
    if(Months==2){
    //check leap year
        if(Years%4==0 && Years%100!=0 || Years%400==0)
        Days_of_months=29;
        else Days_of_months=28;
    }
    else if(Months==1||Months==3|| Months==5|| Months==7||Months==8||Months==10|| Months==12)
    Days_of_months=31;
    else Days_of_months=30;
    //  Calculate the starting of the day
    StartingDay=(Years-1)*365+ (Years-1)/4- (Years-1)/100 +(Years-1)/400;
    for(i=1;i<Months;++i)
    {
        if(i==2){
        if(Years%4==0 && Years%100!=0 || Years%400==0)
        StartingDay+=29;
        
        else StartingDay+=28;
        }

        else if(i==1||i==3|| i==5|| i==7||i==8||i==10|| i==12)
         StartingDay+=31;
         else StartingDay+=30;

    }

    Days_of_weeks=(StartingDay+1)%7;

    printf("==================================\n");
    printf("     %d-%d\n", Years, Months);
    printf("==================================\n");
    printf( " SUN MON TUE WED THUR FRI SAT\n");

    for(i=0;i< Days_of_weeks; ++i)
    {
        printf("    ");
    }

    for(int day=1; day<= Days_of_months;++day){
        printf("%4d" , day);
        if((day+Days_of_weeks)%7==0){
            printf("\n");
        }
    }
    printf("\n");
    return 0;

}

//Simple Weather Program
#include <stdio.h>
int main()
{   
    //HardCoded Data 
    float monthlyrainfall[5][12]={
        {7.3, 8.1, 9.8, 8.8, 7.6, 12.5, 11.0, 7.6, 8.9, 5.6, 11.5, 12.0},
        {7.8, 8.2, 9.6, 8.2, 7.6, 12.3, 11.2, 7.3, 8.0, 5.4, 11.6, 12.1},
        {7.9, 8.6, 9.5, 8.5, 7.6, 12.6, 11.6, 7.4, 8.7, 5.5, 11.4, 12.2},
        {7.4, 8.3, 9.7, 8.3, 7.6, 12.2, 11.4, 7.2, 8.4, 5.9, 11.2, 12.6},
        {7.2, 8.4, 9.0, 8.7, 7.6, 12.1, 11.7, 7.7, 8.1, 5.3, 11.1, 12.5}
                                };

    int year[5]={2010,2011,2012,2013,2014};
    float yearlyavg=0,monthlyavg=0,yearlysum=0,monthlysum=0;
    float sum_2011=0,sum_2012=0,sum_2013=0,sum_2010=0,sum_2014=0;
    int i=0,j=0;
    
    //Calculating The Yearly Averages
    for (i=0;i<12;i++)
        {
            sum_2010+=monthlyrainfall[0][i];
            sum_2011+=monthlyrainfall[1][i];
            sum_2012+=monthlyrainfall[2][i];
            sum_2013+=monthlyrainfall[3][i];
            sum_2014+=monthlyrainfall[4][i];
        }

    float sum_rainfall_yearly[5]={sum_2010,sum_2011,sum_2012,sum_2013,sum_2014};

    //Displayng Yearly Averages

    printf("\n\nYear \t Rainfall\n");
    for (i=0;i<5;i++)
        {
            printf("201%d\t",i);
            printf("  %.2f\n",(sum_rainfall_yearly[i]/12));
        }
    printf("Monthly Averages::::\n");
    printf("\n\nJan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");
    float sum_monthly=0;
    
    //Calculating Yearly Averages & Displaying Them

    for (i=0;i<12;i++)
        {
            for(j=0;j<5;j++)
                {
                  sum_monthly+=monthlyrainfall[j][i]; 
                } 
        printf("%.2f\t",(sum_monthly/5));
        sum_monthly=0;
        }


    return 0;
}
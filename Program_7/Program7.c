#include <stdio.h>

//program to convert mins to days and years.

int main()
{
    double minutes,days=0,years=0,minutepday=1440,minutepyear=525600;

    printf("Enter the number of minutes to convert :\n");
    scanf("%lf", & minutes);
    days=minutes/minutepday;
    years=minutes/minutepyear;
    printf("%.2f minutes is equivalent to %.2f days and %.2f years",minutes,days,years);
   


    return 0;
}
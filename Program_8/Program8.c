#include <stdio.h>

//Program to convert celsius to farenheit

int main()
{
    printf("Enter the reading in celsius : ");
    double ctemp=0,ftemp=0;
    scanf("%lf", & ctemp);
    ftemp=(160+9*ctemp)/5; 
    printf("%.2f ºC in farenheit = %.2fºF\n ",ctemp,ftemp);

    return 0;
}
#include <stdio.h>
#include <math.h>
//Pg 38 Q2.11
int main()
{
    float a,b,c,s,area;
    printf("Enter 1st side length : ");
    scanf("%f",& a);
    printf("\nEnter 2nd side length : ");
    scanf("%f",& b);
    printf("\nEnter 3rd side length : ");
    scanf("%f", & c);
    s=(a+b+c)/2;
    area=(s*(s-a)*(s-b)*(s-c));
    area=pow(area,0.5);
    printf("\nThe calculated AREA is ::: %.2f\n",area);

    return 0;
}
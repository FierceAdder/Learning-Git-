#include <stdio.h>
//Pg 37 Q2.5
int main()
{
    float d=0,t=0,s=0;
    printf("Enter the distance travelled by your car(in Km) : \n");
    scanf("%f", & d);
    printf("Enter the Time taken by your car (in Hrs): \n");
    scanf("%f", & t);
    s=d/t;
    printf("The calculated speed of Your Car is : %.2f Km/Hr\n",s);

    
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,d_squared,d;
    printf("Enter The abcissa of First Point : ");
    scanf("%f", & x1);
    printf("\nEnter The Ordinate of First Point : ");
    scanf("%f", & y1);
    printf("\nEnter The abcissa of First Point : ");
    scanf("%f", & x2);
    printf("\nEnter The Ordinate of Second Point : ");
    scanf("%f", & y2);

    d_squared=pow((x2-x1),2)+pow((y2-y1),2);
    d=pow(d_squared,0.5);
    printf("\nThe Distance Between the Points is = %.2f\n",d);

    return 0;

}
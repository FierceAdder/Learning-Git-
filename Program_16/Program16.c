#include <stdio.h>
float absolutevalue(float num);
int main()
{   
    float num=0.0,absvalue=0.0;
    printf("Enter a value to get absolute value : ");
    scanf("%f", & num);
    absvalue=absolutevalue(num);
    printf("The Absolute Value of %.2f is : %.2f\n",num,absvalue);

    return 0;
}
float absolutevalue(float num)
{
    if (num<0)
        num=-num;
    return num;
}
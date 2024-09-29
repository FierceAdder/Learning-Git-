#include <stdio.h>
float sqroot(float num);
int main()
{
    float num;
    int result;
    printf("Enter a No. ::: ");
    scanf("%f", & num);
    result=sqroot(num);
    if (result==1)
        printf("The no. Entered is not a perfect square\n");
    else if (result==-1)
        printf("The number entered is negative\n");
    else
        printf("The square root of the give no. is : %d\n",result);

    
    
    return 0;

}

float sqroot(float num)
{
    int i=1,result;
    if (num<0)
        result=-1;
    else
        {
            for(;(i*i)<=num;i++)
            {
                if ((i*i==num))
                {
                    result=i;
                }

            }
        }
    return result;
}
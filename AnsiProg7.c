#include <stdio.h>
int main()
{
    int limit=0,counter;
    float sum=0,i=1;
    printf("Enter how many terms of the series do you want to sum up?\n");
    scanf("%d", & limit);
    for(counter=0; counter<limit; counter++)
    {
        sum+=(1/i);
        i++;
        
        }
    printf("The Sum of %d elements of the series = %.2f",limit,sum);
    return 0;

}
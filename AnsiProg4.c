#include <stdio.h>
//Pg 38 Q2.9
int main()
{
    int i=1,j=1;
    for(i=1;i<5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }


    return 0;
}
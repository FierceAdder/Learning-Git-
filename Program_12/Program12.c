//Program to print Prime No.s from 3-100
#include <stdio.h>
int main()
{
    int primes[23]={2,3};
    int j,k=2;
    for(j=5;j<=100;j+=2)
        {
            if (j%3!=0 && j%5!=0 && j%7!=0)
                {
                    primes[k]=j;
                    k++;
                }
        
        }

    int i;
   for(i=0;i<23;i++)
    printf("%d ",primes[i]);

   printf("\n");
   return 0;

}
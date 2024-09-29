#include <stdio.h>

void square(float *const pnum)
{
    *pnum=(*pnum)*(*pnum);
}
int main()
{
    float num,*pnum=NULL;
    pnum=&num;
    printf("Enter a no. : ");
    scanf("%f",pnum);
    square(&pnum);
    printf("%.2f\n",*pnum);
    return 0;
}
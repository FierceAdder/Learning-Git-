#include <stdio.h>
int main()
{
    int *p,x;
    p=&x;
    printf("Enter a NO. : ");
    
    scanf("%d",p);
    printf("\nThe address of x is %d",p);
    printf("%d\n",x);
    return 0;
}
#include <stdio.h>
int main()
{
    long long int a=0,b=1,c=0;
    int limit=0,counter=0;
    
    printf("How many no.s of the fibonacci Series do you want to Print ?\n");   
    scanf("%d", & limit);
    
    printf("%d  %d  ",a,b);
    
    for (counter=2;counter<=limit;counter++)
        {
            c=a+b;
            printf("%d   ", c);
            a=b;
            b=c;
        }

    printf("\n");
    
    return 0;

}
#include <stdio.h>
int main()
{
    int a=0,b=1,c=0,upperlimit=0,lowerlimit=0;
    int limit=0,counter=0;
    
    printf("what do you want the lower limit of output to be ?\n");   
    scanf("%d", & lowerlimit);
    printf("what do you want the upper limit of output to be ?\n");   
    scanf("%d", & upperlimit);
    if(lowerlimit==0)
        printf("%d  ",b);
    
    for ( ;a+b<=upperlimit; a=b, b=c)
        {
            c=a+b;
            if (c<lowerlimit) 
                continue;
            printf("%d   ", c);
            
    
        }

    printf("\n");
    
    return 0;

}
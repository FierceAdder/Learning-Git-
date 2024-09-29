#include <stdio.h>
//pg 37 Q2.4 
int main()
{
    int a,b,c;
    float x;
    printf("Enter the Value of a : ");
    scanf("%d", & a);
    printf("\n") ;  
    
    printf("Enter the Value of b : ");
    scanf("%d", & b);
    printf("\n") ; 
    
    printf("Enter the Value of c : ");
    scanf("%d", & c);
    printf("\n") ; 

    x=a/(b-c);
    printf("%.2f",x);
    
    return 0;

}
#include <stdio.h>

int main()
{
    int num=55,*p=NULL;
    p=&num;
    printf("The address of the Pointer p is : %p \n The Value of the Pointer is : %p \n& It Points to : %d\n",&p,p,*p);
    return 0;
}
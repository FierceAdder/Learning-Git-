#include <stdio.h>

//program to use sizeof operator

int main()
{
    printf("The byte size of int data type is : %zd bytes \n",sizeof(int));
    printf("The byte size of char data type is : %zd bytes \n",sizeof(char));
    printf("The byte size of long data type is : %zd bytes \n",sizeof(long));
    printf("The byte size of long long data type is : %zd bytes \n",sizeof(_Bool));
    printf("The byte size of double data type is : %zd bytes \n",sizeof(float));
    printf("The byte size of long double data type is : %zd bytes \n",sizeof(long double));


    return 0;
}
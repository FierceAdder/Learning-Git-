#include <stdio.h>
// code to take a value and display it

int main() {
    char str[100];
    int i;

    printf("Enter a value");

    scanf("%d %s" ,& i,str );
    printf("\n you entered the value %d::::::%s \n",i,str);
    return 0;

}
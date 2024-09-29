#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    int ulim,i;
    char *str;
    printf("Enter the limit of the string you want to enter : ");
    scanf("%d",&ulim);
    str=(char*)malloc(sizeof(char)*ulim);
    printf("Enter The String : ");
    scanf("%s",str);
    printf("\nThe entered string is : %s\n",str);
    free(str);
    return 0;
}
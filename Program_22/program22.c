#include <stdio.h>
#include <strings.h>

int main()
{
    
    char str1[100],str2[100];
    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);
    
    if (!strcmp(str1,str2))
        printf("The Entered strings are same\n");
    else
        printf("The Entered strings are not the same\n");
    return 0;
}

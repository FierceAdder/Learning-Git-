#include <stdio.h>
#include <strings.h>
int lenstr(char str[100])
{
    char *pstr;
    int len=0;
    pstr=str;
    while(*pstr!='\0')
    {
        len++;
        pstr++;
    }
    return len;
}
int main()
{
    int length=0;
    char str[100];
    printf("Enter a String to calculate its length : ");
    gets(str);
    length=lenstr(str);
    printf("The length of the string is : %d \n",length);
    return 0;
}
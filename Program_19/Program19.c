#include <stdio.h>
#include<string.h>

int len(char c[100]);

int main()
{
    char x[100];

    printf("Enter a String : ");
    //scanf("%s",x);
    gets(x);
    printf("THe length of the string is : %d\n",len(x));
    return 0;
}
int len(char c[100])
{
    int i;
    for (i=0;c[i]!='\0';i++);

    return i;
}


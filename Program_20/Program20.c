#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ispalindrome(char c[100]);
int main()
{   
    char x[100];
    bool result=false;
    printf("This Program Will Check the entered string in order to determine if it is a Palindrome.\n");
    printf("Enter a String: ");
    gets(x);
    result=ispalindrome(x);
    if (result==true)
        printf("Entered string is a PALINDROME.\n");
    else
        printf("Entered string is NOT a Palindrome.\n ");

    return 0;
}
int len(char c[100])
{
    int i;
    for (i=0;c[i]!='\0';i++);

    return i;
}
bool ispalindrome(char c[100])
{
    bool result=false;
    int lengthc,i=0;
    char creverse[100];
    lengthc=len(c)-1;
    for(;lengthc!=-1;lengthc--,i++)
    {
        creverse[i]=c[lengthc];
    }
    for(i=0,lengthc=len(c)-1;i<=lengthc;i++)
    {
        if (c[i]==creverse[i])
            result=true;
        else
        {
            result=false;
            break;
        }
    }
    return result;
}
#include <stdio.h>
//exploring ENUM 

int main() {
    int i=0;

    enum company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};

    enum company x,y,z;
    int j = i++ + i;
    printf("j = %d\t i = %d \n",j,i);
    x=GOOGLE;
    y=XEROX;
    z=EBAY;
    
    printf("%d\n%d\n%d\n",y,x,z);
    return 0;
}
#include <stdio.h>
#include <strings.h>
#define GST 0.18

int main()
{
    int tamt,amt,nop,tip;
    printf("Enter the total amount : ");
    scanf("%d",& amt);
    printf("Enter the no. of persons : ");
    scanf("%d",& nop);
    printf("Enter the tip amount : ");
    scanf("%d",& tip);
    tamt=(amt+amt*GST+tip)/nop;
    printf("     BILL\n amount  %d \n tip \t %d \n GST \t %.2f \n Total \t %d",amt,tip,(amt*GST),(tamt*5));
    printf("\nThe amount to be paid by each of the %d persons is : %d \n",nop,tamt);

    return 0;
}
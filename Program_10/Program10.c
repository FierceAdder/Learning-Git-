#include <stdio.h>
//This program calculates the pay of workers according to hours worked
int main()
{
   float grosspay=0,tax=0,overtime=0;
   float hrs=0;
   float netpay=0;

   printf("Enter the hours you worked :::: \n");
   
   scanf("%f",& hrs);

   if (hrs>=40)
        {overtime=hrs-40;
         grosspay=40*12+overtime*18;

        }
    else
        grosspay=hrs*12;
    
    if (grosspay>=300)
    tax=45;
    else
    tax=grosspay*0.15;

    if (grosspay-300>=150)
    tax+=30;
    else
    tax+=(grosspay-300)*0.2;

    if (grosspay-450>=0)
    tax+=(grosspay-450)*0.25;
    
    netpay=grosspay-tax;
    printf("hey your calculated grosspay is $%.2f \n tax amount=$%.2f \n and your net pay is $%.2f \n Thank You!\n ",grosspay,tax,netpay);

    
    return 0;

}
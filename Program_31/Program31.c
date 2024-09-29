#include <stdio.h>

struct customer
{
    int acnum;
    char name[30];
    float bal;
};

int showdetail(struct customer data[],int noc)
{
    int i;
    for (i=0;i<noc;i++)
    {
        if ((data[i].bal)<1000)
        {
            printf("\n");
            printf("\nAccount Number : %d \nName : %s",data[i].acnum,data[i].name);
        }
    }   
    return 0;
}

int main()
{
    int noc,i,userinput,useracnum;
    float useramt=0.0;
    printf("How many Customers are there ? \n");
    scanf("%d",& noc);
    struct customer data[noc];
    printf("Enter the details : \n");
    for (i=0;i<noc;i++)
    {
        printf("\nAccount Number : ");
        scanf("%d",&data[i].acnum);
        printf("Name : ");
        scanf("%s", &data[i].name);
        printf("Balance : ");
        scanf("%f",&data[i].bal);
    }
    printf("\nThe Account Number and Name of the Customers with Balance Lesser than 1000 are as Follows : ");
    
    showdetail(data,noc); 

    printf("\n\nDo you want to Withdraw(0) OR Deposit(1)?\n");
    scanf("%d",&userinput);
    if (userinput==0||userinput==1)
        printf("Enter Account Number : ");
        scanf("%d",& useracnum);
        for(i=0;data[i].acnum==useracnum;i++)
        {
            if (userinput==0)
            {
                printf("Enter the amount you wish to withdraw : ");
                scanf("%f",& useramt);
                if (data[i].bal-=useramt<1000)
                {
                    printf("The balance is insufficient for the specified withdrawal\n");
                }
                else
                {
                    printf("The New Balance is : %.2f\n",data[i].bal-=useramt);
                }
            }
            else 
            {    
                data[i].bal=useramt;
                printf("The New Balance is : %.2f\n",data[i].bal);   
            }
        }

    return 0;
}
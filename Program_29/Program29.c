#include <stdio.h>

struct empdata{
        char name[100];
        int empnum;
        int salary;
    };

int main()
{ 
    int ulim,i;
    printf("This Program will Help you tabulate the Employee data!!!\n");
    printf("The no. of employees for whom you will enter data : ");
    scanf("%d",&ulim);
    struct empdata emptable[ulim];
    for(i=0;i<ulim;i++)
    {
        printf("Enter the Name of the Employee : ");
        scanf("%s",& emptable[i].name);
        printf("Enter the Employee no. of the Employee : ");
        scanf("%d",&emptable[i].empnum);
        printf("Enter the Salary of the employee : ");
        scanf("%d",&emptable[i].salary);
        printf("\n");
    }
    printf("For the entered details the table is : \n");
    printf(" _______________________________________________________________________________________\n");    
    printf("|\tEmp no.\t\t|\t\tName\t\t|\t\tSalary\t\t|\n");
    printf("|_______________________|_______________________________|_______________________________|\n");

    for (i=0;i<ulim;i++)
    {
        printf("|\t  %d\t\t|\t       %s\t\t|\t\t%d\t\t|\n",emptable[i].empnum,emptable[i].name,emptable[i].salary);
        printf("|_______________________|_______________________________|_______________________________|\n");

    }
    printf("\b");
    return 0;
}
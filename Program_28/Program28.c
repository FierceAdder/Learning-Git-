#include <stdio.h>
#include<stdlib.h>
#include <strings.h>

int main()
{
    struct emp {
        int hiredate;
        float salary;
        char name[100];
    }emp0={21,50000,"Ram"};
    
    struct emp emp1,emp2;
    int i;
    for (i=1;i<=2;i++)
    {
        printf("Enter the details of employee no. %d\n",i);
        if (i==1)
        {
            printf("Hire Date : ");
            scanf("%d",&emp1.hiredate);
            printf("Salary : ");
            scanf("%f",&emp1.salary);
            printf("Name : ");
            scanf("%s",&emp1.name);
        }
        else
        {
            printf("Hire Date : ");
            scanf("%d",&emp2.hiredate);
            printf("Salary : ");
            scanf("%f",&emp2.salary);
            printf("Name : ");
            scanf("%s",&emp2.name);
        }
    }
    printf("\nThe Entered details are ::::: ");
    printf("\n\nEmployee 1 : \nHire Date : %d \nSalary : %.2f \nName : %s",emp1.hiredate,emp1.salary,emp1.name);
    printf("\n\nEmployee 2 : \nHire Date : %d \nSalary : %.2f \nName : %s",emp2.hiredate,emp2.salary,emp2.name);

    return 0;
}
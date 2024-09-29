#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};
struct empdata
    {
        char name[100];
        int empcode;
        int salary;
        struct date date_of_joining;
        
    };

int main()
{ 
    int i;
    struct empdata emp[5]={{"Ashmit",1,50000,{15,10,2020}},
                           {"Adarsh",2,60000,{17,9,2021}},
                           {"Arjun",3,70000,{15,3,2022}},
                           {"Mayank",4,80000,{20,2,2023}},
                           {"Aakash",5,90000,{6,12,2024}}};
    struct date currentdate;
    /*for (i=0;i<5;i++)
    {
        printf("Name : ");
        scanf("%s",&emp[i].name);
        printf("Employee code : ");
        scanf("%d",&emp[i].empcode);
        printf("Salary : ");
        scanf("%d",&emp[i].salary);
        printf("Tenure(in years) : ");
        scanf("%d",&emp[i].tenure);
        printf("Enter date as follows : ");
        printf("\nDay : ");
        scanf("%d",&emp[i].date_of_joining.day);
        printf("Month : ");
        scanf("%d",&emp[i].date_of_joining.month);
        printf("Year : ");
        scanf("%d",&emp[i].date_of_joining.year);
    }
    if((currentdate.month-emp[i].date_of_joining.month)>=0)
            {
                if((currentdate.day-emp[i].date_of_joining.day)>=0)
                {                
                    printf("%s\n",emp[i].name);
                }
            }*/
    printf("Enter Current date as follows : ");
    printf("\nDay : ");
    scanf("%d",&currentdate.day);
    printf("Month : ");
    scanf("%d",&currentdate.month);
    printf("Year : ");
    scanf("%d",&currentdate.year);
    printf("The Names of the Employees who have a TENURE of 3 years or Greater are ::::::\n");
    for (i=0;i<5;i++)
    {
        if((currentdate.year-emp[i].date_of_joining.year)>3)
        {
            printf("%s\n",emp[i].name);
        }   
        else if((currentdate.year-emp[i].date_of_joining.year)==3)   
        {
            if((currentdate.month-emp[i].date_of_joining.month)>=0)
            {
              if((currentdate.day-emp[i].date_of_joining.day)>=0)
                {                
                    printf("%s\n",emp[i].name);
                }  
            }
        }
    }

    return 0;
}
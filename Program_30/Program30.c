#include <stdio.h>
    
struct student 
{
    int rollnum;
    char name[30];
    char dept[30];
    char course[30];
    int yoj;
};
int shownames(struct student stu[],int yoj_to_search,int nos)
{
    int i;
    for(i=1;i<=nos;i++)
    {
        if (stu[i-1].yoj==yoj_to_search)
        {
            printf("%s\n",stu[i-1].name);
        }
    }
    return 0;
}
int showdetails(struct student stu[],int rno_to_search,int nos)
{
   int i;
    for(i=1;i<=nos;i++)
    {
        if (stu[i-1].rollnum==rno_to_search)
        {
            printf("Name : %s \nDepartment : %s \nCourse : %s \nYear of Joining : %s \n",stu[i-1].name,stu[i-1].dept,stu[i-1].course,stu[i-1].yoj);
        }
    } 
}


int main()
{
    int nos,i,yoj_to_search,rno_to_search;   
    printf("Enter the no. of Students in the college : ");
    scanf("%d",& nos);
    struct student studata[nos];
    for(i=1;i<=nos;i++)
    {
        printf("Roll Number : ");
        scanf("%d", & studata[i-1].rollnum);
        printf("Name : ");
        scanf("%s", & studata[i-1].name);
        printf("Department : ");
        scanf("%s", & studata[i-1].dept);
        printf("Course : ");
        scanf("%s", & studata[i-1].course);
        printf("Year of Joining : ");
        scanf("%d", & studata[i-1].yoj);
    }
    printf("Enter Year of Joining of the students whose names you want to display : ");
    scanf("%d", & yoj_to_search);
    printf("Names ::::: \n");
    shownames(studata,yoj_to_search,nos);
    printf("Enter Roll Number of the students whose Details you want to display : ");
    scanf("%d", & rno_to_search);
    showdetails(studata,rno_to_search,nos);
    return 0;
}

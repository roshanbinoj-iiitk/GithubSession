#include <stdio.h>
int main()
{
    struct employee
    {
        int eid;
        char name[20];
        float salary;
    };
    struct employee e[10];
    for(int i=0;i<10;i++) 
    {
        printf("Enter eid, name and salary\n");
        scanf("%d %s %f",&e[i].eid,e[i].name,&e[i].salary);
    }
    printf("Employee info: \n");
    for(int i=0;i<10;i++) 
    {   printf("Employee %d details:\n",(i+1));
        printf("Eid = %d Name = %s Salary= %.2f\n",e[i].eid,e[i].name,e[i].salary);
    }
}

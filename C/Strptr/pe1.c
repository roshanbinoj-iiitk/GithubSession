#include <stdio.h>
struct employee
{
    int eid;
    char name[20];
    float salary;
};
void printDetails(struct employee e);
int main()
{
    struct employee e1;
    printf("Enter eid, name and salary\n");
    scanf("%d %s %f", &e1.eid, e1.name, &e1.salary);
    printDetails(e1);
}
void printDetails(struct employee e)
{
    printf("Eid = %d Name = %s Salary= %.2f\n",e.eid,e.name,e.salary);
}

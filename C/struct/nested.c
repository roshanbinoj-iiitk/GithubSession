#include <stdio.h>
struct dob
{
    int day;
    int mth;
    int year;
};
struct student
{
    int id;
    char name[20];
    struct dob d1;
}s1;
void main()
{   printf("\nenter id of s1 ");
    scanf("%d",&s1.id);
    printf("\nenter name of s1 ");
    scanf("%s",s1.name);
    printf("\nenter dob of s1 ");
    scanf("%d %d %d",&s1.d1.day,&s1.d1.mth,&s1.d1.year);
    printf("\nDetails of student1");
    printf("\nstudent id=%d",s1.id);
    printf("\nstudent name=%s",s1.name);
    printf("\nstudent dob=%d-%d-%d",s1.d1.day,s1.d1.mth,s1.d1.year);
}


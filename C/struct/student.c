#include <stdio.h>
void main()
{
    struct student
    {
        int id;
        char name[20];
        float perc;
    };
    struct student s1;
    printf("Enter the id, name and the percentage\n");
    scanf("%d%s%f",&s1.id,s1.name,&s1.perc);
    printf("\nId : %d",s1.id);
    printf("\nName : %s",s1.name);
    printf("\nPercentage : %f",s1.perc);
}
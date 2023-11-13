#include <stdio.h>
int main()
{
    struct car
    {
        char name[50];
        int year;
    };
    struct car c1 = {"BMW X5", 1999};
    printf("Name: %s\nYear: %d\n",c1.name,c1.year);
    struct car c2 = {"Ford Mustang", 1969};
    printf("Name: %s\nYear: %d\n",c2.name,c2.year);
    struct car c3 = {"Toyota Corolla", 2011};
    printf("Name: %s\nYear: %d\n",c3.name,c3.year);
}
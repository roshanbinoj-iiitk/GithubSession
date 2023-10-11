#include <stdio.h>

int main()
{   char ch;
    int a,b;
    do
    {
        printf("Enter 1 to add two numbers, enter 2 to substract,enter 3 to exit.");
        scanf("%c",&ch);
        printf("Enter two numbers ");
        scanf("%d %d",&a,&b);
        switch(ch)
        {
            case '1':
                printf("Sum = %d\n",(a+b));
                break;
            case '2':
                printf("Difference = %d\n",(a-b));
                break;
            case '3':
                return 0;
                break;
            default:    
                printf("Wrong input");
        }
        printf("Do you want to continue?(y/n) ");
        scanf("%c",&ch);
    }
    while (ch=='y');
    return 0;
}
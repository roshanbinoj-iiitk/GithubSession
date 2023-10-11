#include <stdio.h>
int main()
{   int ch;
    do
    {   int n;
        printf("1 To find the number is even and print that number.\n2 To find the number odd and print that number.\n0 Exit program.\n");
        printf("Enter choice: "); 
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the number = ");
            scanf("%d",&n);
            if(n%2==0)
            printf("The given number %d is Even\n",n);
            else 
            printf("The given number is not Even\n");
            break;
            case 2:
            printf("Enter the number = ");
            scanf("%d",&n);
            if(n%2!=0)
            printf("The given number %d is Odd\n",n);
            else 
            printf("The given number is not Odd\n");
            break;
            case 0:
            break;
            default:
            printf("Wrong choice");
        }
    }
    while(ch!=0);
    return 0;
}   
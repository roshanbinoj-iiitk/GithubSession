#include <stdio.h>
int main()
{   int n,i,sum=0;
    for(i = 1;i<=5;i++)
    {   printf("Enter number = ");
        scanf("%d",&n);
        sum+=n;
    }
    printf("Sum = %d",sum); 
}   
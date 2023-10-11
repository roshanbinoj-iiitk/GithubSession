#include <stdio.h>
int main()
{
    printf("Enter the value of n = ");
    int n,sum = 0,i;
    scanf("%d",&n);
    for(i = 1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum = %d",sum); 
}   
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n==1)
        return false;
    else
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
}

int main()
{   int a,b;
    printf("Enter range:");
    scanf("%d %d",&a,&b);
    printf("\n");
    for(int i=a;i<=b;i++)
    {
        if(isPrime(i))
            printf("%d ",i);
    }
}
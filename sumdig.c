#include <stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int sum=0;
    int d=0;
    while(n>0)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    printf("Sum=%d",sum);
}
#include <stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int c=0;
    for(int i=2;i<=(n/2);i++)
    {
        if(n%i==0)
            c++;
    }
    if(c>0)
        printf("Not a prime no");
    else
        printf("Prime no");
}
#include <stdio.h>
int main()
{   int n,copy;
    scanf("%d",&n);
    int rev=0;
    int d=0;
    copy=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(copy==rev)
        printf("Palindrome");
    else 
        printf("Not a palindrome");
    return 0;
}
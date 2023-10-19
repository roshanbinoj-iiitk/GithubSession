/*palindrome no retun type pass parameter*/
#include <stdio.h>
void pal(int);
int main()
{   int n;
    scanf("%d",&n);
    pal(n);
    return 0;
}
void pal(int n)
{
    int copy;
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
}
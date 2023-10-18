/*WAP in C to find sum of natural numbers*/
#include <stdio.h>
int sum(int);
int main()
{
    printf("Enter the number till which sum is to be found1: ");
    int a;
    scanf("%d",&a);
    printf("Sum = %d",sum(a));
}
int sum(int n)
{
    if(n>1)
    {
        return n+sum(n-1);
    }
    else 
        return 1;
}
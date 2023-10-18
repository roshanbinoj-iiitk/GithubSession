/*WAP in C to find sum digits with recursion with return type and pass parameter*/
#include <stdio.h>
int sumdig(int);
int main()
{
    printf("Enter the number to find the sum of digits: ");
    int a;
    scanf("%d",&a);
    printf("Sum = %d",sumdig(a));
}
int sumdig(int n)
{
    if(n>0)
    {
        return n%10+sumdig(n/10);
    }
    else 
        return 0;
}
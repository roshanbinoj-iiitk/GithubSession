#include <stdio.h>
int PrintOdd(int,int);
int main()
{
    printf("Enter the range ");
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=PrintOdd(a,b);
    printf("Sum=%d",sum);
}
int PrintOdd(int a,int b)
{
    if(a%2!=0)
        return a+PrintOdd(a+1,b);
    else if(a<b)
        return PrintOdd(a+1,b);
    else
        return 0;
}
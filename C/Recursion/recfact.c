#include <stdio.h>
int fact(int);
void main()
{
    int num;
    scanf("%d",&num);
    printf("Factorial of %d is: %d\n",num,fact(num));
}
int fact(int n)
{
    if(n==0||n==1)
        return  1;
    else
    return (n*fact(n-1));
}
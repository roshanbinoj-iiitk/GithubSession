/*Program to find if the number is odd or even*/
#include <stdio.h>
void EvenOdd(int a);
int main()
{
    printf("Enter the number ");
    int n;
    scanf("%d",&n);
    EvenOdd(n);
}
void EvenOdd(int a)
{
    if(a%2==0)
        printf("Number is Even");
    else
        printf("Number is Odd");
}
/*Program to find the smallest number using functions*/
#include <stdio.h>
int Smallest(int a,int b,int c);
int main()
{
    printf("Enter the numbers ");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("Smallest number = %d",Smallest(a,b,c));
}
int Smallest(int a,int b,int c)
{
    if(a<b&&a<c)
        return a;
    else if(b<c&&b<a)
        return b;
    else
        return c;
}
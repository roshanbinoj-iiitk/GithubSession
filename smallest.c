#include <stdio.h>
int main()
{
    printf("Enter the three numbers ");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&a<c)
    {
        printf("%d is smallest",a);
    }
    else if(b<a&&b<c)
    {
        printf("%d is smallest",b);
    }
    else 
    {
        printf("%d is smallest",c);
    }
}
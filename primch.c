#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,n=2;
    printf("Enter a number (of which you will be checking for prime):-");
    scanf("%d",&num);
    for ( n=2; n < num; n++ )
    {
        if ( num % n  == 0)
        {
            printf("%d is not a prime number",num);
            return 0;
        }     
    }
    printf("%d is a prime number",num);
    return 0;
}
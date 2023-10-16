#include <stdio.h>
void main(int a);
int main()
{
    printf("Enter the number");
    int n;
    scanf("%d",&n);
    main(n);
}
void main(int a)
{
    if(a%2==0)
        printf("Number is Even");
    else
        printf("Number is Odd");
}
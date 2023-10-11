#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum=0,x,count=0;
    while (x!=0 && count<2)
    {
        printf("Enter a number :");
        scanf("%d",&x);
        sum = sum+x; 
        count = count+1;
    }

    printf("Sum of entered umbers is : %d",sum);
    return 0;
}
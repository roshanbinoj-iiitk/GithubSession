#include <stdio.h>
int main()  
{   int a;
    printf("Enter your age ");
    scanf("%d",&a);
    if(a<18)
        printf("\nMinor and not fit for job.");
    else if(a<60)
        printf("\nFit for job. ");
    else 
        printf("\nMajor and not fit for job.");
    return 0;
}
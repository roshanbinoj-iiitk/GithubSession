#include <Stdio.h>
int main()
{   int a[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter number ");
        scanf("%d",&a[i]);
    }
    printf("The numbers in the array are: ");  
    for(int i=4;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
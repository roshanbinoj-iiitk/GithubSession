#include <stdio.h>
int main()
{
    int a[6];
    int i;
    printf("Enter elements: ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    printf("The array is: ");
    for(i=0;i<6;i++)
    {
        printf("%d ",a[i]);
        if(a[i]%2==0)
        {
            c++;
        }
    }
    printf("The number of even numbers = %d",c);

}
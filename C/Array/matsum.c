/*wap to find sum of two matrices*/
#include <stdio.h>
int main()
{   int i,j;
    int a,b;
    printf("Enter the order: ");
    scanf("%d %d",&a,&b);
    int a1[a][b],a2[a][b];
    printf("Enter the elements for 1st matrix below\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter the elements for 2nd matrix below\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            a1[i][j]=a1[i][j]+a2[i][j];
        }
    }
    printf("The sum array is :\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t",a1[i][j]);
        }
        printf("\n");
    }
}
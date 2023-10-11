#include <stdio.h>
int main()
{   int i,j;
    int n;
    printf("Enter the side: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements below\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The double dimensional array is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("The diagonal is :\n");
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                printf("%d\t",arr[i][j]);
            else 
                printf("\t");
        }
        printf("\n");
    }
}
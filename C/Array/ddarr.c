#include <stdio.h>
int main()
{   int i,j;
    int arr[2][2];
    printf("Enter the elements below\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The double dimensional array is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
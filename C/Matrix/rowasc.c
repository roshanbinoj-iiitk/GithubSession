#include <stdio.h>
int main()
{
    int i, j, m, n;
    printf("Enter order : ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter the elements below\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The double dimensional array is :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n-1; j++)
        {
            for(int k = 0;k<n-1-j;k++)
            {
                if(a[i][k]>a[i][k+1])
                {
                    int temp=a[i][k+1];
                    a[i][k+1]=a[i][k];
                    a[i][k]=temp;
                }
            }
        }
    }
    printf("The double dimensional array is :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
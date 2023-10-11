#include <stdio.h>
int main()
{
    int i, j, m, n;
    printf("Enter order : ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter the elements below\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The double dimensional array is :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
}
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
    int nz=0;
    printf("The double dimensional array is :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
            if(arr[i][j]==0)
            nz++;
        }
        printf("\n");
    }
    if(nz>(m*n/2))
    printf("Sparse matrix");
    else 
    printf("Not a sparse matrix");
}
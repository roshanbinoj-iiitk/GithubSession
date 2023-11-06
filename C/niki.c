#include <stdio.h>
int main()
{
    int num, sum = 0;
    scanf("%d", &num);
    int a[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nPrinting Reversed Array:-\n\n");
    for (int i = num - 1; i > -1; i--)
    {
        printf("%d ", a[i]);
        sum += a[i];
    }
    for (int i = 0; i < num; i++)
    {
        printf("\nAddress of a[%d] is %d ", i, &a[i]);
    }
    printf("\n\nSum=%d\n", sum);
    return 0;
}
/*Find the frequency of each and every charcter taken in the string*/
/*Sort an array in ascencding order*/
#include <stdio.h>
int main()
{
    int temp, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int num[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nThe array before sorting is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("\nThe array after sorting is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
}
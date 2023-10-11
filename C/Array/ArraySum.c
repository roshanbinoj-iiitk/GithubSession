/*read two one d  arrayas of 5 and stor the sum of these to the tird one*/
#include <stdio.h>
int main() {
    int a[5],b[5];
    int i;
    printf("Enter elements for array1 = ");
    for(i=0;i < 5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements for array2 = ");
    for(i=0;i < 5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nArray1 = ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nArray2 = ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    for(i=0;i < 5;i++)
    {
        a[i]=a[i]+b[i];
    }
    printf("\nSum = ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}
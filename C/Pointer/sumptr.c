/*A program to find the sum of numbers in an array usimng pointer*/
#include <stdio.h>
int main()
{
    int a[3] = {1, 2, 3};
    int *p = a;
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += *p;
        p++;
    }
    printf("Sum of elements = %d", sum);
    return 0;
}

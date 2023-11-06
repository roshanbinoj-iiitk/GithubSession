#include <stdio.h>
int main()
{
    int a[]={10,20,30};
    int *ptr=&a[0];
    printf("%d\n",a[0]);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
}
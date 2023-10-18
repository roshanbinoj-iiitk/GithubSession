#include <stdio.h>
int main()
{
    //extern keyword
    extern int x;
    printf("The value of auto variable:%d",x);
    return 0;
}
int x=10;
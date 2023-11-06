#include <stdio.h>
void fun(int*,int*);
void main()
{
    int x=5,y=7;
    fun(&x,&y);
    printf("\nx = %d, y = %d",x,y);
}
void fun(int *a,int *b)
{   *a=7;
    *b=5;
    printf("x = %d, y = %d",*a,*b);
}
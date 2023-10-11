#include <stdio.h>
void main()
{
    int i = 95;
    float x = 90.99;
    char ch ='A';
    i = x;
    printf("i value is %d\n",i);
    x = i;
    printf("x value is %f\n",x);
    i = ch;
    printf("i value is %d\n",i);
}